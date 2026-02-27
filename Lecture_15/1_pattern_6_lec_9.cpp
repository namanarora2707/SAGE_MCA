#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        //pattern
        for(int j=1;j<=2*i-1;j++){
            if(j%2!=0){
                //number
                cout<<i<<" ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    for(int i=n-1;i>=1;i--){
        //pattern
        for(int j=1;j<=2*i-1;j++){
            if(j%2!=0){
                //number
                cout<<i<<" ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    return 0;
}