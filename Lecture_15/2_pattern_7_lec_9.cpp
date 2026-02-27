#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        //spaces
        for(int j=0;j<n-i;j++){
            cout<<"  ";
        }
        //left ke numbers
        for(int j=n-i;j<n-1;j++){
            cout<<j+1<<" ";
        }
        cout<<0<<" ";
        for(int j=n-1;j>n-i;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}