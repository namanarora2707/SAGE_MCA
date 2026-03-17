#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // create
    // 1 create array jisme size pata hai lekin number nahi pata hai
    int a[5];

    // 2 create array jisme size and number dono pata hai

    int b[]={1,2,3,4,5};

    int n=sizeof(b)/sizeof(int);
    cout<<n<<endl;

    // 3 create array jisme humme size nahi pata hai aur number bhi nahi pata hai

    int s;
    cin>>s;
    int c[s];

    // read
    // array b ko read kara

    // for(int i=0;i<n;i++){
    //     cout<<b[i]<<" ";
    // }

    // update (input lena)
    for(int i=0;i<s;i++){
        cin>>c[i];
    }
    // sub
    for(int i=0;i<5;i++){
        a[i]=i;
    }

    // print of a array
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    // print of c array
    for(int i=0;i<s;i++){
        cout<<c[i]<<" ";
    }
    return 0;
}