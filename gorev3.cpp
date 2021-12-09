#include <iostream>
#include <vector>

using namespace std;

template <class T>
vector<vector<T>> create_matrix(T x, int cols, int rows) {
    vector<T> row_vec;
    for (int i = 0; i < cols; i++) {
        row_vec.push_back(x);
    }
    vector<vector<T>> vec;
    for (int i = 0; i < rows; i++) 
        vec.push_back(row_vec);
    return vec;
}

int main() {
    vector<vector<float>> vec = create_matrix(5.5f, 5, 5); 
    for (int i = 0; i < vec.size(); i++) {
        for (int j = 0; j < vec[i].size(); j++)
            cout << vec[i][j] << " ";
        cout << endl;
    }
    return 0;
}