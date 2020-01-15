#ifndef TMPT_H
#define TMPT_H

#include <QtWidgets/QMainWindow>
#include "ui_tmpt.h"

class tmpT : public QMainWindow
{
	Q_OBJECT

public:
	tmpT(QWidget *parent = 0);
	~tmpT();

private:
	Ui::tmpTClass ui;
};

#endif // TMPT_H
