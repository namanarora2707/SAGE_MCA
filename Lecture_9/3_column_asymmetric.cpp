#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        //space
        // a loop
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        //star
        // b loop
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        // b loop
        for(int j=2;j<=i;j++){
            cout<<"* ";
        }
        // a loop
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}