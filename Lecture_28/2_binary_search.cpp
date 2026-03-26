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
    sort(a,a+n);
    //sort hoga toh theek hai nahi toh pehle sort kardega
    int key;
    cin>>key;
    // binary search 
    int s=0;
    int e=n-1;
    while(s<=e){
        int m=s+(e-s)/2;
        if(key==a[m]){
            cout<<m<<endl;
            return 0;
        }
        else if(key<a[m]){
            e=m-1;
        }
        else{
            s=m+1;
        }
    }
    cout<<-1<<endl;
    return 0;
}