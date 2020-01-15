#include "tmpt.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	tmpT w;
	w.show();
	return a.exec();
}
