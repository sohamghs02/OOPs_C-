#include<bits/stdc++.h>
using namespace std;

class Parent{
public:
    //function overriding ~~ RUN-TIME POLYMORPHISM
    void getInfo(){
        cout<<"parent class \n";
    }

    virtual void hello(){
        cout<<"Hello from parent \n";
    }
};

class Child : public Parent {
public:    
    void getInfo(){
        cout<<"child class \n";
    }

    void hello(){
        cout<<"Hello from child \n";
    }
};

int main(){
    // Parent p1;
    // p1.getInfo();
    Child c1;
    c1.getInfo();
    c1.hello();

    return 0;
}