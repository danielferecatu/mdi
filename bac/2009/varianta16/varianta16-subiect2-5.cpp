#include <iostream>
using namespace std;

int main() {

int n, a[20][20]={0};


cout << "Numarul de linii: ";
cin >> n;


for (int i=0; i<n; i++)
    for (int j=0; j<n; j++)
        a[i][j] = 3;

for (int i=0; i<n; i++) {

    a[i][n-1-i] = 4;
    a[i][i] = 4;

}

for (int i=0; i<n; i++) {

    cout << endl;
    for (int j=0; j<n; j++)
        cout << a[i][j] << " ";

}

cout << endl;

return 0;

}
