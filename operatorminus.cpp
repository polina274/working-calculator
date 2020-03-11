#include<operator1.cpp>
#include <QDebug>
template<typename T>
class Operatorminus : public Operator1<T>
{
public:
    Operatorminus() {

    }
    T action(T first, T second) {
        qDebug() << "sq1";
        return first - second;
    }
};

