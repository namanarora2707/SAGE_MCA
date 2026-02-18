#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    //upper
    for(int i=1;i<=n;i++){
        //space
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        // star
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    // lower
    for(int i=n-1;i>=1;i--){
        //space
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        // star
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}