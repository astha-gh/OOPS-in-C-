#include<iostream>
using namespace std;

class Secret{
    private:
    int x = 77;
    protected:
    int y = 100; 
    friend class Chugli;
};

class Chugli{
    public:
    void display(Secret &obj){
        cout<<"Value of x : "<<obj.x<<endl;
        cout<<"Value of y : "<<obj.y<<endl;
    }
};

int main(){
    Secret obj;
    Chugli obj1;
    obj1.display(obj);
    return 0;
}