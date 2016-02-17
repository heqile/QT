#include <QApplication>
#include <QtCore>
#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication app(argc,argv);
    QWidget *window = new QWidget;
    window->setWindowTitle("My App");
    QGridLayout *layout = new QGridLayout;
    QLabel *label1 = new QLabel("name1");
    QLabel *label2 = new QLabel("name2");

    QLineEdit *line1 = new QLineEdit;
    QLineEdit *line2 = new QLineEdit;

    QPushButton *button = new QPushButton("OK");

    layout->addWidget(label1,0,0);
    layout->addWidget(label2,1,0);
    layout->addWidget(line1,0,1);
    layout->addWidget(line2,1,1);
    layout->addWidget(button,2,1,1,1);

    window->setLayout(layout);
    window->show();
    return app.exec();
}
