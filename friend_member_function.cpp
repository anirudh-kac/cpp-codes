#include <iostream>
using namespace std;

class A;

class B{
    private:
    int data_b;
    public:
    void set_data_b(int b){
        data_b=b;
    }

    void set_data_friend(A& objA,int data){
        objA.data_a = data;
    }
};

class A{
    private:
        int data_a;
    public:
        void set_data_a(int a){
            data_a = a;
        }
        friend void B :: set_data_friend(A &objA,int data);
};


int main(){
    A a1;
    B b1;
    a1.set_data_a(10);
    b1.set_data_friend(a1,20);
    return 0;

}

