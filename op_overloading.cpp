#include <iostream>
using namespace std;

class Complex{
    public :
    int real;
    int img;
    Complex(int r , int i){
        real = r;
        img = i;
    }
    Complex operator+(Complex &c){
        Complex ans(0,0);
        ans.real = real + c.real;
        ans.img = img + c.img;
        return ans;
    }
};

int main(){
    Complex c1(7,2);
    Complex c2(2,9);
    Complex c3 = c1 + c2;
    cout<<c3.real<<" + "<<c3.img<<"j"<<endl;
    return 0;
}