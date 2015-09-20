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

int main() {

// variabile
int n, p=0;

// citire date
cout << "N= ";
cin >> n;

// incrementam p pt fiecare nr prim gasit
for( int i=3; i<n; i+=2 ) {

    if( prim(i) ) {
        p++;
    }

}

// afisare rezultat
cout << p+1;

}
