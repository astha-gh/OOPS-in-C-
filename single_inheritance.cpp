#include<iostream>
using namespace std;

class Parent{
    protected:
    int a;

    public:
    void set_a(){
        cout<<"Enter a: "<<endl;
        cin>>a;
    }
    void display_a(){
        cout<<"Value of a: "<<a<<endl;
    }
};

class Child : public Parent{
    public :
    int b;
    int p;
    void set_b(){
        set_a();
        cout<<"Enter b: "<<endl;
        cin>>b;
    }
    void display_b(){
        display_a();
        cout<<"Value of b: "<<b<<endl;
    }
    void product(){
        cout<<"Product : "<<a*b<<endl;
    }
};

int main(){
    Child obj1;
    //while calling b, function of a are automatically called as child class has inherited it from parent class
    obj1.set_b();
    obj1.display_b();
    obj1.product();
    return 0;
}