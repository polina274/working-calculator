#include<operator1.cpp>
#include <QDebug>
template<typename T>
class Operatorumnogit : public Operator1<T>
{
public:
    Operatorumnogit() {

    }
    T action(T first, T second) {
        qDebug() << "sq1";
        return first * second;
    }
};

