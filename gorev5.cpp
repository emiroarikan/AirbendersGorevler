#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main() {

    fstream afile, bfile;

    bfile.open("b.txt", ios::in);

    string rowValues;
    int rowNum = 0;

    while (getline(bfile, rowValues)) {
        rowNum += 1;
    }

    bfile.clear();
    bfile.seekg(0, ios::beg);

    vector<vector<int>> aMatrix;
    vector<int> bVec;

    while (getline(bfile, rowValues)) {
        stringstream value(rowValues);
        int x = 0;
        value >> x;
        bVec.push_back(x);
    }
    bfile.close();

    afile.open("A.txt", ios::in);

    vector<int> vec;
    string rowValuesA;

    for (int i=0; i <= rowNum-1; i++) {
        getline(afile, rowValuesA);
        istringstream value(rowValuesA);
        int x = 0;

         while (value >> x)
            vec.push_back(x);

         aMatrix.push_back(vec);

        for (int j = 0; j <= rowNum-1; j++) {
                vec.pop_back();
        }
    }
    
    afile.close();
    
    cout << "Matrix A is:" << endl;
    for (int i = 0; i < aMatrix[0].size(); i++) {
        for (auto k: aMatrix[i]) {
            cout << k << ' ';
        }
        cout << endl;
    }

    cout << "Vector B is:" << endl;
    for (auto i: bVec)
        cout << i << endl;
        

    return 0;
}
