#pragma once

#include <QtWidgets/QWidget>
#include "ui_Chess.h"
#include <QPushButton>
#include <QPainter>
#include <QLabel>
#include <vector>
#include <qvector2d.h>

class Chess : public QWidget
{
    Q_OBJECT

public:
    Chess(QWidget *parent = Q_NULLPTR);

    /*virtual void paintEvent(QPaintEvent* event)
    {
        QPainter painter(this);

        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                if ((i + j) % 2 == 0)
                    painter.setBrush(Qt::lightGray);
                else
                    painter.setBrush(Qt::darkCyan);
                //painter.drawRect(QRect(i * tailleTuiles, j * tailleTuiles, tailleTuiles, tailleTuiles));
            }
        }
    }*/
private:
    Ui::ChessClass ui;
    int tailleTuiles = 75;
};
class essai {
public:
    QString getcouleur() { return couleur; }
private:
    QString couleur = "Noir";
};
class Piece : public QWidget
{
public:
    Piece(QWidget* parent, QLabel* l) : QWidget(parent)
    {
        essai i;
        //QString j = "Blanc";
        //i += j + ".png";
        //image = QImage(i);
        image.load("PionTest"+i.getcouleur() + ".PNG");
        l->setPixmap(QPixmap::fromImage(image.scaled(75, 75)));
    }
private:
    QImage image;
};
