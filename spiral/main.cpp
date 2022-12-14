#include "spiral.h"

#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int** spiral = GenerateSpiral(n, m);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << spiral[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; ++i) {
        delete[] spiral[i];
    }
    delete[] spiral;
    return 0;
}
