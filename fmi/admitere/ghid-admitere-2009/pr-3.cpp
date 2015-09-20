#include <iostream>
using namespace std;

bool prim( int n ) {

    for( int i=2; i<=n/2; i++ ) {
        if( n%i==0 ) {
            return false;
        }
    }
    return true;

}

bool verifica( int n ) {

    for( int i=2; i<=n/2; i++ ) {
        if( prim(i) && prim(n-i) ) {
            return true;
        }
    }
    return false;

}

int main() {

// variabile
int n;

// citire date
cout << "n= ";
cin >> n;

// verificam numerele pare pana la n
for (int i=4; i<=n; i+=2) {

if( !verifica(i) ) {
    cout << i << " nu verifica";
    break;
}

}

// afisare rezultat
cout << "se verifica pentru numere >2 si <=" << n;

return 0;

}
