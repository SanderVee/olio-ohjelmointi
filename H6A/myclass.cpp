#include "myclass.h"

MyClass::MyClass(QObject *parent) : QObject(parent)
{
    // Uusi Qt5/Qt6 -syntaksi
    connect(this, &MyClass::mySignal, this, &MyClass::mySlot);
}

void MyClass::raiseMySignal()
{
    emit mySignal();
}

void MyClass::mySlot()
{
    qDebug() << "mySlot:ia kutsuttiin";
}
