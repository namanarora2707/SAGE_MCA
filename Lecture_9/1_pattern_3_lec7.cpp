#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int m=(n+1)/2;
    for(int i=1;i<=m;i++){
        //space
        for(int j=1;j<=m-i;j++){
            cout<<"  ";
        }
        // star
        if(i==1){
            cout<<"* ";
        }
        else{
            cout<<"* ";
            for(int j=1;j<=2*i-3;j++){
                cout<<"  ";
            }
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=m-1;i>=1;i--){
        //space
        for(int j=1;j<=m-i;j++){
            cout<<"  ";
        }
        // star
        if(i==1){
            cout<<"* ";
        }
        else{
            cout<<"* ";
            for(int j=1;j<=2*i-3;j++){
                cout<<"  ";
            }
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}