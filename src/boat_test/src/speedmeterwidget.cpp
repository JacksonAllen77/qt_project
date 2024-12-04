#include "speedmeterwidget.h" // 包含头文件
#include <QPainter>
#include <QTimer>
#include <QtMath>

SpeedMeterWidget::SpeedMeterWidget(QWidget *parent)
    : QWidget(parent),
    currentValue(0.0),  // 初始化为0
    startAngle(150),
    mark(0)
{
    setFixedSize(350,350); // 设置窗口大小
    // 启动定时器来定时更新显示（可选）
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &SpeedMeterWidget::onTimeout);  // 每次超时更新界面
    timer->start(50);  // 50ms 定时器刷新
}

SpeedMeterWidget::~SpeedMeterWidget()
{
    delete timer; // 释放定时器
}

// 新增方法，用于更新外部传入的速度
void SpeedMeterWidget::updateSpeed(float speed)
{
    currentValue = speed / 4.0;  // 假设速度单位是Km/h，乘以4对应每个刻度（根据你的实现，可能需要调整）
    update();  // 更新界面
}

void SpeedMeterWidget::initCanvas(QPainter& painter)
{
    painter.setRenderHint(QPainter::Antialiasing,true); // 启用抗锯齿
    painter.setBrush(Qt::black); // 设置背景为黑色
    painter.drawRect(rect());
    QPoint cent(rect().width()/2,rect().height()*0.6); // 设置中心点
    painter.translate(cent); // 平移到中心
}

void SpeedMeterWidget::drawMiddleCircle(QPainter &painter, int radius)
{
    painter.setPen(QPen(Qt::white,3)); // 设置画笔颜色和粗细
    painter.drawEllipse(QPoint(0,0),radius,radius); // 绘制圆形
}

void SpeedMeterWidget::drawCurrentSpeed(QPainter &painter)
{
    painter.setPen(Qt::white);
    QFont font("Arial",30);
    font.setBold(true);
    painter.setFont(font);
    painter.drawText(QRect(-60,-60,120,70),Qt::AlignCenter,QString::number(currentValue*4)); // 绘制当前速度
    QFont font2("Arial",13);
    font.setBold(true);
    painter.setFont(font2);
    painter.drawText(QRect(-60,-60,120,160),Qt::AlignCenter,"m/h"); // 绘制单位
}

void SpeedMeterWidget::drawScale(QPainter &painter,int radius)
{
    angle = 240*1.0 / 60; // 计算每个刻度的角度
    painter.save();
    painter.setPen(QPen(Qt::white,5)); // 设置刻度线颜色和粗细
    painter.rotate(startAngle); // 旋转到起始角度
    for(int i=0; i<=60; i++){
        if(i >= 40){
            painter.setPen(QPen(Qt::red,5)); // 高速区间刻度为红色
        }
        if(i % 5 == 0) {
            painter.drawLine(radius - 20, 0, radius - 3, 0); // 绘制长刻度
        } else {
            painter.drawLine(radius - 8, 0, radius - 3, 0); // 绘制短刻度
        }
        painter.rotate(angle); // 旋转角度
    }
    painter.restore();
}

void SpeedMeterWidget::drawScaleText(QPainter &painter, int radius)
{
    QFont font(QFont("Arial",15));
    font.setBold(true);
    painter.setFont(font);
    int r = radius - 49;
    for(int i=0; i<=60; i++){
        if(i % 5 == 0) {
            painter.save();
            int delX = qCos(qDegreesToRadians(static_cast<double>(210 - angle * i))) * r;
            int delY = qSin(qDegreesToRadians(static_cast<double>(210 - angle * i))) * r;
            painter.translate(QPoint(delX,-delY));
            painter.rotate(-120 + angle * i);
            painter.drawText(-25, -25, 50, 30, Qt::AlignCenter, QString::number(i * 4)); // 绘制刻度文字
            painter.restore();
        }
    }
}

void SpeedMeterWidget::drawPointLine(QPainter &painter,int lenth)
{
    painter.save();
    painter.setBrush(Qt::white);
    painter.setPen(Qt::NoPen);
    static const QPointF points[4] = {
        QPointF(0,0),
        QPointF(200.0,-1.1),
        QPointF(200.0,1.1),
        QPointF(0,15.0),
    };
    painter.rotate(startAngle + angle * currentValue); // 旋转到对应位置
    painter.drawPolygon(points, 4); // 绘制指针
    painter.restore();
}

void SpeedMeterWidget::drawSpeedPie(QPainter &painter, int radius)
{
    QRect rentangle(-radius,-radius,radius*2,radius*2);
    painter.setPen(Qt::NoPen);
    painter.setBrush(QColor(255,0,0,80)); // 设置填充色
    painter.drawPie(rentangle,(360-startAngle)*16,-angle*currentValue*16); // 绘制速度指示扇形
}

void SpeedMeterWidget::drawEllipseInnerBlack(QPainter &painter, int radius)
{
    painter.setBrush(Qt::black);
    painter.drawEllipse(QPoint(0,0),radius,radius); // 绘制黑色圆形
}

void SpeedMeterWidget::drawEllipseInnerShine(QPainter &painter, int radius)
{
    QRadialGradient radaGradient(0,0,radius);
    radaGradient.setColorAt(0.0,QColor(255,0,0,200));
    radaGradient.setColorAt(1.0,QColor(0,0,0,100));
    painter.setBrush(radaGradient);
    painter.drawEllipse(QPoint(0,0),radius,radius); // 绘制渐变圆形
}

void SpeedMeterWidget::drawEllipseOutShine(QPainter &painter, int radius)
{
    QRect rentangle(-radius,-radius,radius*2,radius*2);
    painter.setPen(Qt::NoPen);

    QRadialGradient radiaGradient(0,0,radius);
    radiaGradient.setColorAt(1.0,QColor(255,0,0,200));
    radiaGradient.setColorAt(0.97,QColor(255,0,0,70));
    radiaGradient.setColorAt(0.9,QColor(0,0,0,0));
    radiaGradient.setColorAt(0,QColor(0,0,0,0));
    painter.setBrush(radiaGradient);

    painter.drawPie(rentangle,(360-150)*16,-angle*61*16); // 绘制外圈渐变
}

void SpeedMeterWidget::drawLogo(QPainter &painter, int radius)
{
    QRect rectangle(-65,radius*0.38,130,50);
    painter.drawPixmap(rectangle,QPixmap(":/icon.png")); // 绘制 logo
}

void SpeedMeterWidget::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    int radius = height()/2;
    initCanvas(painter); // 初始化画布
    drawMiddleCircle(painter,60); // 绘制中间圆形
    drawScale(painter,radius); // 绘制刻度
    drawScaleText(painter,radius); // 绘制刻度文字
    drawPointLine(painter,radius-58); // 绘制指针
    drawSpeedPie(painter,radius+25); // 绘制速度指示扇形
    drawEllipseInnerShine(painter,110); // 绘制渐变内圈
    drawEllipseInnerBlack(painter,80); // 绘制黑色内圈
    drawCurrentSpeed(painter); // 绘制当前速度
    drawEllipseOutShine(painter,radius+25); // 绘制外圈渐变
    drawLogo(painter,radius); // 绘制 logo
}

// 定时器超时处理，刷新显示
void SpeedMeterWidget::onTimeout()
{
    update();  // 每次超时调用 update 更新界面
}
