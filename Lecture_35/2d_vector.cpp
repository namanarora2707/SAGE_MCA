#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<vector<int>> vec = {{1,2},{3,4}};
    int vr = vec.size();
    int vc = vec[0].size();

    cout << vr << " " << vc << endl;

    for(int i=0;i<vr;i++){
        for(int j=0;j<vc;j++){
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }

    for(int i=0;i<vr;i++){
        for(int j=0;j<vc;j++){
            cin >> vec[i][j];
        }
    }

    for(int i=0;i<vr;i++){
        for(int j=0;j<vc;j++){
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }

    int vr2, vc2;
    cin >> vr2 >> vc2;

    vector<vector<int>> dynVec(vr2, vector<int>(vc2));

    for(int i=0;i<vr2;i++){
        for(int j=0;j<vc2;j++){
            cin >> dynVec[i][j];
        }
    }

    for(int i=0;i<vr2;i++){
        for(int j=0;j<vc2;j++){
            cout << dynVec[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}