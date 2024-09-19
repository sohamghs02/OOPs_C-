#include<bits/stdc++.h>
using namespace std;

class Person {  
public:
    string name;
    int age;

    Person(string name, int age){
        this->name = name;
        this->age = age;
    }

    Person() {
        cout<<"Parent Constructor \n";
    }
    ~Person() {
        cout<<"Parent Destructor Called \n";
    }
};

class Student : public Person { //Inheritance
public:
    int roll;

    Student(string name, int age, int roll) : Person(name, age) { //explicitly call parent class
        // cout<<"child constructor \n";
        this->roll = roll;
    }

    void getInfo() {
        cout<<name<<"\n"<<age<<"\n"<<roll<<endl;
    }
    ~Student() {
        cout<<"Child Destructor Called \n";
    }
};

int main() {
    Student s1("rahul", 22, 1234);    
    s1.getInfo();
    
    return 0;
}