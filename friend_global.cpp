#include <iostream>
using namespace std;

class A{
    int x;
    public:
    friend void double_val(A&);

    void set(int a)
    {
        x =a;
    }

    int get()
    {
        return x;
    }
};

void double_val(A& Aobj)
{
    Aobj.x *=2;
}


int main()
{
    A A1;
    A1.set(15);
    cout<<A1.get()<<endl;;
    double_val(A1);
    cout<<A1.get();
    return 0;
}
