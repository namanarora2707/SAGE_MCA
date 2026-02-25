#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int cnt=1;
    for(int i=1;i<=n;i++){
        //spaces
        for(int j=1;j<=n-i;j++){
            cout<<" \t";
        }
        // number
        for(int j=1;j<=2*i-1;j++){
            cout<<cnt<<"\t";
            cnt++;
        }
        cout<<endl;
    }
    return 0;
}