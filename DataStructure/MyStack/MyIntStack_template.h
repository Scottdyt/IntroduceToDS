#ifndef MYINTSTACK_H_INCLUDED
#define MYINTSTACK_H_INCLUDED
#include <iostream>
enum Error_code{underflow,overflow,success};
const int maxstack=10;

template <class T>
class MyStack{
public:
    MyStack();
    bool Empty() const;
    Error_code push(const T &item);
    Error_code top( T &item) ;
    Error_code pop();
    void fun1();
    void fun2();
private:
    int cunt;
    T entry[maxstack];
};


#endif // MYINTSTACK_H_INCLUDED
