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
        //left ke numbers
        for(int j=i;j<=2*i-1;j++){
            cout<<j<<" ";
        }
        //right ke numbers
        for(int j=2*i-2;j>=i;j--){
            cout<<j<<" ";
        }
        //right ki space likhe yah likhke baat ek hi hai
        cout<<endl;
    }
    return 0;
}