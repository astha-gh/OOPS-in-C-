#include<iostream>
using namespace std;

class Parent1{
    public:
    int a;
    void set_a(){
        cout<<"Enter a: "<<endl;
        cin>>a;
    }
    void display_a(){
        cout<<"Value of a: "<<a<<endl;
    }
};

class Parent2{
    public:
    int b;
    void set_b(){
        cout<<"Enter b: "<<endl;
        cin>>b;
    }
    void display_b(){
        cout<<"Value of b: "<<b<<endl;
    }
};

class Child : public Parent1, public Parent2{
    public:
    int c;
    void addition(){
        set_a();
        set_b();
        display_a();
        display_b();
        c = a+b;
        cout<<"Addition of two numbers is "<<c<<endl;
    }
};

int main(){
    Child obj;
    //child class inherites functions from both parent classes to perform a certain function
    obj.addition();
    return 0;
}