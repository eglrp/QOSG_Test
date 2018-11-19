#ifndef QOSG_H
#define QOSG_H

#include <QtWidgets/QMainWindow>
#include "ui_qosg.h"

class QOSG : public QMainWindow
{
	Q_OBJECT

public:
	QOSG(QWidget *parent = 0);
	~QOSG();

private:
	Ui::QOSGClass ui;
};

#endif // QOSG_H
