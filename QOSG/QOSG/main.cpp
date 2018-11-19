#include "qosg.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QOSG w;
	w.show();
	return a.exec();
}
