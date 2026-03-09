#include <iostream>
using namespace std;
// no arguement and no return
void greet(){
    cout<<"Good Morning"<<endl;
}

// no arguement and return
int subtract(){
    int a=5;
    int b=2;
    int c=a-b;
    return c;
}

// arguement and no return
void hello(string name){
    cout<<"Hello "<<name<<endl;
}

// arguement and return
int add(int a,int b){
    int c=a+b;
    return c;
}
int main() {
    greet();
    cout<<subtract()<<endl;
    hello("naman");
    cout<<add(10,15)<<endl;
    return 0;
}