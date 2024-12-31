#include<iostream>
using namespace std;

class Base{
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

class Derived1 : public Base{
    public:
    int b;
    void set_b(){
        //inheritaed from base
        set_a();
        cout<<"Enter b: "<<endl;
        cin>>b;
    }
    void display_b(){
        //inherited from base
        display_a();
        cout<<"Value of b: "<<b<<endl;
    }
};

class Derived2: public Derived1{
    public :
    int c;
    void set_c(){
        //inheritaed from derived1;
        set_b();
        cout<<"Enter c: "<<endl;
        cin>>c;
    }
    void display_c(){
        //inherited from derived1;
        display_b();
        cout<<"Value of c: "<<c<<endl;
    }
    void product(){
        cout<<"Product of a,b,c : "<<a*b*c<<endl;
    }

};

int main(){
    Derived2 obj1;
    obj1.set_c();
    obj1.display_c();
    obj1.product();
    return 0;
}