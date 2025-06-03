#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> printPascal(int n) {
    vector<vector<int>> mat;
    for (int row = 0; row < n; row++) {
      	vector<int>arr;
        for (int i = 0; i <= row; i++) {
          
        if (row == i || i == 0)
            arr.push_back(1);
        else
            arr.push_back(mat[row - 1][i - 1] + 
                            mat[row - 1][i]);
        }
        mat.push_back(arr);
    }
  return mat;
}

int main() {
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    vector<vector<int>> mat = printPascal(n);
    for (int i = 0; i < mat.size(); i++) {

        // Adding spaces before numbers 
        for (int spaces = 0; spaces < n-1-i; ++spaces){
            cout << "  ";
        }
        for (int j = 0; j < mat[i].size(); j++) {
            	cout << mat[i][j] << "   ";
        }
        cout << endl;
    }
    return 0;
}