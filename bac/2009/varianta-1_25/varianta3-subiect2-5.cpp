#include <iostream>
using namespace std;

int main() {

int n, a[24][24];

do {

    cout << "Dati numarul de linii si de coloane: ";
    cin >> n;

}
while ( n<2 || n>24 );

cout << endl;

for (int i=0; i<n; i++)
    a[i][i]=0;

for (int i=0; i<n; i++)
    for (int j=0; j<n; j++)
        if ( i!=j ) a[i][j]=n-j;

for (int i=0; i<n; i++) {

    for (int j=0; j<n; j++)
        cout << a[i][j] << " ";

    cout << endl;

}

return 0;

}
