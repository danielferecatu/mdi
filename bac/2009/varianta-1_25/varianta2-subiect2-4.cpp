#include <iostream>
using namespace std;

int main() {

int m, n, a[10][10], k, l;


cout << "Linii n: ";
cin >> n;

cout << endl;


for ( k=0; k<n; k++ ) {

    for ( l=0; l<n; l++ ) {

        if ( k<l ) a[k][l] = k;
        else a[k][l] = l;

    }

}

int p=1;

for ( l=0; l<n; l++ ) {

    if ( a[2][l]!=0 ) {
        p *= a[2][l];
    }

}

cout << "Ultima cifra a produsului este: " << p%10 << endl << endl;

// afisare
for ( k=0; k<n; k++) {
    for ( l=0; l<n; l++ )
        cout << a[k][l] << " ";
    cout << endl;
}

return 0;

}
