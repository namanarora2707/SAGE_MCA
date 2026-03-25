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
    // insertion sort
    for(int i=1;i<n;i++){
        int key=a[i];
        int j=i-1;
        while(j>=0 and a[j]>key){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }

    // print
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}