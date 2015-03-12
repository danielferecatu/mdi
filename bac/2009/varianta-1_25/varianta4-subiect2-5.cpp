#include <iostream>
using namespace std;

int main() {

int n, a[24][24]={{0}};

do {

    cout << "Dati numarul de linii si de coloane: ";
    cin >> n;

}
while ( n<2 || n>24 );

cout << endl;

for (int i=0; i<n; i++)
    for (int j=0; j<n; j++)
        a[i][n-1-i]=0;

for (int i=0; i<n; i++)
    for (int j=0; j<n; j++)
        if ( i!=n-1-j ) a[i][j]=n-i;

for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++)
        cout << a[i][j] << " ";
    cout << endl;
}

return 0;

}
