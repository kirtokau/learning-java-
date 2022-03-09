﻿#include <iostream>
using namespace std;
//左移运算符重载
class Person
{
friend ostream& operator<<(ostream& cout, Person& p);
public:
    Person(int a, int b)
    {
        m_A = a;
        m_B = b;
    }
private:
    //利用成员函数重载左移运算符 p.operator<<(p)
    //不会利用左移运算符重载运算符，因为无法实现cout在左侧
    /*void operator<<(Person& p)
    {

    }*/

    int m_A;
    int m_B;

};
//只能利用全局函数重载左移运算符
ostream& operator<<(ostream &cout,Person &p)//本质 operator<<(cout,p),简化cout<<p
{
    cout << "m_A=" << p.m_A << " m_B=" << p.m_B;
    return cout;
}
void test01()
{
    Person p(10,10);
   /* p.m_A = 10;
    p.m_B = 10; */
    cout << p<<" hello world"<<endl;
}

int main()
{
    test01();
}

