#include<iostream>
using namespace std;

class Parent{
    public :
    virtual void display(){
        cout<<"Parent class"<<endl;
    }
    void print (){
        cout<<"Parent class"<<endl;
    }
};

class Child: public Parent{
    public :
    void display(){
        cout<<"Child class"<<endl;
    }
    void print (){
        cout<<"Child class"<<endl;
    }
};

int main(){
    Parent *p;
    Child c;

    p = &c;

    p->display();
    //Child class(overriden due to virtual)
    p->print();
    //Parent class(not overriden)
    return 0;
}