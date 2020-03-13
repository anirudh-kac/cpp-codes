#include <iostream>
using namespace std;

class outer{
    public:
    int outer_value;
    class inner{
        public :
        int inner_value;
        int get_value();
        void set_value(int val);
    };
};

int outer::inner::get_value(){
    return inner_value;
}

void outer::inner::set_value(int val){
    inner_value = val;
}

int main(){
    cout<<"Inside main"<<endl;
    outer::inner obj;
    obj.set_value(100);
    cout<<obj.get_value();
    return 0;
}