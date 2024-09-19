#include<bits/stdc++.h>
using namespace std;

// //static keyword
// void fun(){
//     static int x = 0; //init statement-1 run
//     cout<<"x : "<< x <<endl;
//     x++;
// }

class A {
public:
    int x;

    void incx() {
        x = x + 1;
    }
};

int main(){
    // fun();
    // fun();
    // fun();//now the values will increase as keyword is changed to static

    A obj1;
    A obj2;

    obj1.x = 100;
    obj2.x = 200;

    cout<< obj2.x <<endl;
    // obj.incx();
    // cout<< obj.x <<endl;

    return 0;
}