#include<bits/stdc++.h>
using namespace std;

class Student{
public:
    string name;

    //constructor Overloading ~~ COMPILE-TIME POLYMORPHISM
    Student() {
        cout<<"non-parameterised constructor \n";
    }

    Student(string name){
        this->name = name;
        cout<<"Parameterised Constructor \n";
    }
};

int main(){
    // Student s1; //non parameterised will be invoked
    Student s1("Anjan"); //parameterised will be invoked

    return 0;
}