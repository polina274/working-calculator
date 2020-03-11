#ifndef OPERATOR1_H
#define OPERATOR1_H

template<typename T>
class Operator1
{
public:
    Operator1<T>() {};
    virtual T action(T first, T second){};
};

#endif // OPERATOR1_H
