#include<iostream>
using namespace std;

class Rectangle{
    public:
    int l;
    int b;

    //Default constructor with no parameters passed
    Rectangle(){              
        l=0;
        b=0;
    }

    //Parameterised constructor has paarmeters
    Rectangle(int x , int y){
        l = x;
        b = y;
    }

    //Copy construction is used to create an object which will copy data from another object
    Rectangle(Rectangle &r){
        l = r.l;
        b = r.b;
    }

    //Destructor---> is called when an object is deleted
    ~Rectangle(){
        cout<<"Destructor is called"<<endl;
    }
};

int main(){

    Rectangle obj1;
    cout<<obj1.l<<" "<<obj1.b<<endl;

    Rectangle obj2(7,9);
    cout<<obj2.l<<" "<<obj2.b<<endl;

    Rectangle obj3(obj2);
    cout<<obj3.l<<" "<<obj3.b<<endl;

    return 0;
}