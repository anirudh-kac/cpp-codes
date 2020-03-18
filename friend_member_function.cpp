#include <iostream>
using namespace std;

class A;
class B;


class A{
    private:
        int x;
    public:
        void set_data_a(int a){
            x = a;
        }
        
        friend void B :: set_data_friend(A &objA,int data);
};

class B{
    private:
    int y;
    public:
    void set_data_b(int b){
        y=b;
    }

    void set_data_friend(A& A1,int data){
        A1.x = data;
    }
};



int main(){
    A a1;
    B b1;
    a1.set_data_a(10);
    b1.set_data_friend(a1,20);
    return 0;

}

