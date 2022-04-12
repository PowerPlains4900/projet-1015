#include "Chess.h"
#include "stdafx.h"

Chess::Chess(QWidget *parent)
    : QWidget(parent)
{
    setFixedSize(8 * tailleTuiles, 8 * tailleTuiles);
    ui.setupUi(this);
}
