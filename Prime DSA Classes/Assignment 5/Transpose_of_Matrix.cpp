#include<iostream>
#include<vector>
using namespace std;

void transpose(vector<vector<int>>& matrix) {
    int n = matrix.size();

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
}

int main() {
    int n;
    cout<<"Enter the value of n: ";
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));

    // Input
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    transpose(matrix);

    // Output
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}