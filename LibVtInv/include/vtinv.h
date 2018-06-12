#ifndef VTINV_H
#define VTINV_H

#include "vtinv_global.h"

#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QWidget>

class VTINVSHARED_EXPORT VtInv
{

public:
    VtInv();
    ~VtInv();

private slots:

private:
    QLabel* label;
    QLineEdit* lineEdit;
    QPushButton* designer;
    QPushButton* preview;
    QVBoxLayout* layout;
    QWidget* window;


};

#endif // VTINV_H
