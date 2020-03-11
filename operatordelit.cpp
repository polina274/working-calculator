#include<operator1.cpp>
#include <QDebug>
template<typename T>
class Operatordelit : public Operator1<T>
{
public:
    Operatordelit() {

    }
    T action(T first, T second) {
        qDebug() << "sq1";
        return first / second;
    }
};

