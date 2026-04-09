#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[2][2] = {{1,2},{3,4}};
    int rows = sizeof(arr) / sizeof(arr[0]);
    int cols = sizeof(arr[0]) / sizeof(arr[0][0]);

    cout << rows << " " << cols << endl;

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin >> arr[i][j];
        }
    }

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}