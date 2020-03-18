#include <iostream>
using namespace std;

int main()
{
    int a;
    // b is a reference to a
    int &b = a;

    //p is a pointer to a;
    int * p = &a;

    a = 100;
    cout<<b<<endl;
    b*=2;
    cout<<a<<endl;

    (*p) = 500;
    cout <<a<<endl;
    b += 70;
    cout<<a<<" "<<b<<" "<<*p<<endl;
    return 0;


}