#include<iostream>
using namespace std;

class Inheritance{
    public:
    int x;

    protected:
    int y;

    private:
    int z;
};


//Inheritance modes

class Child1 : public Inheritance{
    //x is public
    //y is protected
    //z is not accessible
};

class Child2 : private Inheritance{
    //x is private
    //y is private
    //z is not acccessible
};

class Child3 : protected Inheritance{
    //x is protected
    //y is protected
    //z is not acccessible
};

int main(){
    
    return 0;
}