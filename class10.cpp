#include<bits/stdc++.h>
using namespace std;

class ABC{
public:
    ABC() {
        cout<<"constructor \n";
    }

    ~ABC() {
        cout<<"destructor \n";
    }
};

int main(){
    if(true){
        // ABC obj; //gets deleted after if condition ends
        static ABC obj; //stays lifetime
    }
    cout<<"end of main function \n";

    return 0;
}