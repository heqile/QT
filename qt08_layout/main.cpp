#include <QApplication>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPushButton>

int main(int agrc, char *agrv[])
{
    QApplication app(agrc,agrv);

    QWidget *window = new QWidget;
    window->setWindowTitle("My App");

    QPushButton *PushButton1 = new QPushButton("one");
    QPushButton *PushButton2 = new QPushButton("two");
    QPushButton *PushButton3 = new QPushButton("three");

    QHBoxLayout *hboxlayout = new QHBoxLayout;

    hboxlayout->addWidget(PushButton1);
    hboxlayout->addWidget(PushButton2);
    hboxlayout->addWidget(PushButton3);

    window->setLayout(hboxlayout);
    window->show();
    return app.exec();
}




