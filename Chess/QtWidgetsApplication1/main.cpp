#include "Chess.h"
#include "stdafx.h"
#include <QtWidgets/QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Chess w;
    QLabel* label = new QLabel(&w);
    Piece p = Piece(&w, label);
    w.show();
    return a.exec();
}
