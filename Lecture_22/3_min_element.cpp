#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=a[0];
    for(int i=0;i<n;i++){
        if(ans>a[i]){
            ans=a[i];
        }
    }
    cout<<ans<<endl;
    return 0;
}