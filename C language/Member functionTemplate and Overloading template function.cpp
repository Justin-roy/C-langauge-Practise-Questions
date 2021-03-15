#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;
template <class R>
class Justin
{
public:
    R data;
    Justin(R a){
       data = a;
    }
    void Display();
protected:
private:
};
template <class R>
void Justin<R>::Display()
{
    cout<<data<<endl;
}
void fun(int a)
{
    cout<<"Function called ! "<<a<<endl;
}
template <class R>
void fun(R a)
{
    cout<<"Templatised Function called ! "<<a<<endl;
}
template <class R>
void fun1(R a)
{
    cout<<"Templatised Function1 called ! "<<a<<endl;
}
int main()
{
    Justin <float> u(5.02);
    cout<<u.data<<endl;
    u.Display();
    fun(54);//Exact match takes highest priority......
    fun("Justin");
    fun1('D');
return 0;
}
