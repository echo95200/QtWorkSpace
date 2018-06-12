#include "vtinv.h"
#include <QDebug>

VtInv::VtInv()
{
    label = new QLabel;
    lineEdit = new QLineEdit;
    designer = new QPushButton;
    preview = new QPushButton;

    label->setText("INVOICE NUMBER : ");
    designer->setText("DESIGNER");
    preview->setText("PREVIEW");

    layout = new QVBoxLayout;
    layout->addWidget(label);
    layout->addWidget(lineEdit);
    layout->addWidget(preview);
    layout->addWidget(designer);

    window = new QWidget;
    window->setLayout(layout);
    window->setWindowTitle("Report");
    window->show();

}







