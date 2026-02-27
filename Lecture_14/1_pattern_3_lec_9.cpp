#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        //left ki spaces
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        // left ka number
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        //right ka number
        for(int j=i-1;j>=1;j--){
            cout<<j<<" ";
        }
        //right ki spaces
        // isko likhke na likhke baat ek hi hai
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}