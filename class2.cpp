#include<bits/stdc++.h>
using namespace std;

class Student {
public:
    string name;
    double* cgpaptr;

    Student(string name, double cgpa) {
        this->name = name;
        cgpaptr = new double;
        *cgpaptr = cgpa; //shallow copy made here 
    }

    Student(Student &obj){
        this->name = obj.name;
        // this->cgpaptr = obj.cgpaptr;
        //implementing deep copy
        cgpaptr = new double;
        *cgpaptr = *obj.cgpaptr; //deep copy implemented
    }

    //Destructor
    ~Student() {
        cout<<"Destructor Called \n";
        delete cgpaptr; //to manually delete values present dynamically in class, if not done MEMORY LEAK occurs
    }

    void getInfo() {
        cout<<name<<"\n"<<*cgpaptr<<endl;
    }
};

int main() {
    Student s1("Soham Ghosh", 8.83);
    s1.getInfo();

    // cout<<endl;

    // // Student s2(s1);
    // // *(s2.cgpaptr) = 9.2;//shallow copy so when we call s1 again change is reflected in s1 too
    // // s1.getInfo();

    // Student s2(s1);
    // *(s2.cgpaptr) = 9.2;
    // s2.name = "Neha";
    // s1.getInfo(); // now as deep copy is implemented so no change will occur to the values of s1
    // s2.getInfo();

    return 0;
}