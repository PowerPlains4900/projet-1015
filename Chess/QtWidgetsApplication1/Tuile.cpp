#include "Chess.h"
#include <QtWidgets/QApplication>
/*

struct Tuile : public QWidget {
	Tuile(QVector2D position,QVector2D taille, Qt::GlobalColor couleur, bool occupee = false) {
		position_ = position;
		taille_ = taille;
		couleur_ = couleur;
		occupee_ = occupee;
	}
	QVector2D GetPosition() {return position_;}
	void paintEvent(QPaintEvent* event) {
		QPainter painter(this);
		painter.setBrush(couleur_);
		painter.drawRect(QRect(position_.x(), position_.y(), taille_.x(), taille_.y()));
	}

	Qt::GlobalColor couleur_;
	bool occupee_;
	QVector2D taille_;
	QVector2D position_;
};*/