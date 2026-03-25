#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // user input
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    // selection
    for(int i=0;i<n-1;i++){
        int mini=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[mini]){
                mini=j;
            }
        }
        swap(a[i],a[mini]);
    }
    // print
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}