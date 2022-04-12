#include "Chess.h"
#include "stdafx.h"
#include <QtWidgets/QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Chess w;
    QPainter painter(&w);
    painter.setBrush(Qt::black);
    painter.drawRect(QRect(50, 50, 600, 600));
    QLabel* label = new QLabel(&w);
    Piece p = Piece(&w, label);
    w.show();
    return a.exec();
}
