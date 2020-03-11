#include<operator1.cpp>
#include <QDebug>
template<typename T>
class OperatorPlus : public Operator1<T>
{
public:
    OperatorPlus() {

    }
    T action(T first, T second) {
        qDebug() << "sq1";
        return first + second;
    }
};

