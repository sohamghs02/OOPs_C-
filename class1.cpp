#include<bits/stdc++.h>
using namespace std;

class Teacher {    
private:
    float salary;//data hiding ENCAPSULATION
public:
    //attributes or properties
    string name;
    string dept;
    string subject;  

    //CONSTRUCTOR OVERLOADING --> POLYMORPHISM
    // //non - parameterised constructor
    // Teacher(){
    //     // cout<<"Hi i am CONSTRUCTOR";
    //     // cout<<endl;
    //     dept = "Computer Science";
    // }

    //parameterised constructor
    Teacher(string name, string dept, string subject, double salary) {
        this->name = name; //this pointer
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    } 

    //copy constructor
    Teacher(Teacher &obj) { //pass by reference
        cout<<"Copy Constructor Called"<<endl;
        this->name = obj.name;
        this->name = obj.name;
        this->dept = obj.dept;
        this->subject = obj.subject;
        this->salary = obj.salary;
    }

    void getInfo() {
        cout<<name<<"\n"<<subject<<"\n"<<dept<<"\n"<<salary<<endl;
    }    

    // //methods or member functions
    // void changeDept(string newDept) {
    //     dept = newDept;
    // }

    // //setter private values
    // void setSalary(double s) {
    //     salary = s;
    // }

    // //getter private values
    // double getSalary() {
    //     return salary;
    // }
};

int main() { 
    // Teacher t1;//Object Creation , Constructor Called
    // // Teacher t2;
    // t1.name = "Soham";
    // t1.subject = "C++";
    // // t1.dept = "CST";
    // // t1.salary = 25000;
    // t1.setSalary(25000);

    // cout<<t1.name<<endl;
    // // cout<<t1.salary<<endl;
    // cout<<t1.getSalary()<<endl;
    // cout<<t1.dept<<endl;

    Teacher t1("Soham", "CST", "Computer Science", 25000);
    t1.getInfo();
    cout<<endl;
    Teacher t2(t1); //Default Copy Constructor Called // after creating a copy constructor in class this becomes CUSTOM COPY CONSTRUCTOR 
    t2.getInfo();

    return 0;
}