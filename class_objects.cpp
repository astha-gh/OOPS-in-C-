#include<iostream>
using namespace std;

class Exam{
public:
    string name;
    int roll_no;
    string mother_name;
    //Function defined inside the class defination
    void print_details(){
        cout<<name<<" - "<<roll_no<<endl;
    }
    //Function defined outside the class defination
    void printMother();
};

void Exam :: printMother(){
    cout<<"Enter mother name : "<<mother_name<<endl;
}

int main(){
    Exam obj1;
    obj1.name = "Astha";
    obj1.roll_no = 106018;
    obj1.mother_name = "Shashikala";
    obj1.print_details();

    cout<<"Name of the applicant - "<<obj1.name<<endl;
    cout<<"Roll no of the applicant - "<<obj1.roll_no<<endl;

    obj1.printMother();
    return 0;
}