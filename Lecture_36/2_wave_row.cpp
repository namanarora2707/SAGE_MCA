#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int r,c;
    cin>>r>>c;
    vector<vector<int>> mat(r,vector<int>(c));
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>mat[i][j];
        }
    }

    // wave row print karani hai
    for(int i=0;i<r;i++){
        if(i%2==0){
            //left to right
            for(int j=0;j<c;j++){
                cout<<mat[i][j]<<" ";
            }
        }
        else{
            //right to left
            for(int j=c-1;j>=0;j--){
                cout<<mat[i][j]<<" ";
            }
        }
    }
    return 0;
}