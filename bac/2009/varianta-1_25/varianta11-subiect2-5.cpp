#include <iostream>
using namespace std;

int main() {

int m, n, a[10][10];


cout<<"Dati numarul de linii: ";
cin >>m;

cout<<"Dati numarul de coloane: ";
cin >>n;


// citire
for (int i=0; i<m; i++)
    for (int j=0; j<n; j++) {

        cout<<"a["<<i<<"]["<<j<<"]= ";
        cin >> a[i][j];

    }

cout << endl;

// calculare minim
for (int i=0; i<m; i++) {

    int minimum=9999;

    for (int j=0; j<n; j++) {

        if ( a[i][j]<minimum ) {
            minimum=a[i][j];
        }

    }

    cout << minimum;

}

return 0;

}
