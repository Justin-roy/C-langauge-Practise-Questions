#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;
// Swaping two number........
template <class T>
void Swapp(T &a,T &b)
{
    T temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a;
    int f=54,g=90;
    Swapp(f,g);
    cout<<"Swap : "<<f<<" "<<g;
return 0;
}
