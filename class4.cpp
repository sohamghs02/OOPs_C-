#include<bits/stdc++.h>
using namespace std;

class Person {  
public:
    string name;
    int age;
    Person(string n, int a) : name(n), age(a) {}
};

class Student : public Person { 
public:
    int roll;
    Student(string n, int a, int r) : Person(n, a), roll(r) {}
};

class GradStudent : public Student {
public:
    string resarea;
    GradStudent(string n, int a, int r, string ra) : Student(n, a, r), resarea(ra) {}

    void getInfo() {
        cout<<name<<"\n"<<age<<"\n"<<roll<<"\n"<<resarea<<endl;
    }
};

int main() {
    GradStudent s1("rahul", 22, 1234, "cyber security");   
    s1.getInfo();
    
    return 0;
}