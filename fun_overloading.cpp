#include<iostream>
using namespace std;

class Func_Overloading{
    public:
    void func(){
        cout<<"This will be called when no arguments are passed"<<endl;
    }
    void func(int x){
        cout<<"This called when x is "<<x<<endl;
    }
    void func(double x){
        cout<<"This is called when x is "<<x<<" decimel"<<endl;
    }
};

int main(){
    Func_Overloading obj1;
    obj1.func();
    obj1.func(7);
    obj1.func(7.77);

    return 0;
}