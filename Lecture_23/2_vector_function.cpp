#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> a={2,7,5,8,10};
    sort(a.begin(),a.end());
    cout<<"Sorting order Ascending"<<endl;
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"Descending Order"<<endl;
    sort(a.begin(),a.end(),greater<int>());
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"Reverse Order"<<endl;
    vector<int> b={2,3,4,5,6};
    reverse(b.begin(),b.end());
    for(int i=0;i<b.size();i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
    // vector ke first index par kya padhao toh
    cout<<"Front element "<<a.front()<<endl;
    // yeh btata hai ki vector ke first element par konsa number padha hai
    
    // vector ke last index par kya padha ho toh
    cout<<"Last Element "<<a.back()<<endl;
    // yeh btata hai ki vector ke last element par konsa number padha hai

    // humme particular index par pata karna hai ki konsa number padha hai
    cout<<"Particular Index "<<a.at(2)<<endl;
    // yeh humme uss index par number btayega joh padha hua hai

    //humme ek vector ke beech me ek number insert karna hai 
    cout<<"After inserting"<<endl;
    a.insert(a.begin()+2,100);
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    // agar element humme beech me se hatana hai 
    a.erase(a.begin()+2);
    cout<<"After erase"<<endl;
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    // poori vector me se saare element hatane hai
    a.clear();
    // isse saare element hat jayenge

    // check karna ho ko vector khali hai yah nahi 
    // toh uske ke liye empty();
    if(a.empty()){
        cout<<"Yes Vector is empty"<<endl;
    }
    else{
        cout<<"No vector is not empty"<<endl;
    }
    return 0;
}