#include <iostream>
using namespace std;

int cub( int n ) {
    return n*n*n;
}

// testeaza daca n este un x^3, cu x>=inf
bool eCub( int n, int inf ) {

    for( int i=inf; i<=n; i++ ) {

        if( cub(i)==n ) {
            return true;
        }
        else if( cub(i)>n ) {
            return false; // optimizare
        }

    }
    return false;

}

// gaseste prima descompunere cu elemente >=inf
int primulCub( int n, int inf ) {

    for  (int i=inf; i<=n/2; i++ ) {
        if( cub(i)>n ) {
            return -1;
        }
        if( eCub(n-cub(i), i) ) {
            return 1;
        }
    }
    return -1; // nu exista

}

bool verifica( int n ) {

    // verificam daca exista doua variante distincte
    if( !primulCub(n, 1) ) {
        if( primulCub(n, primulCub(n, 1)+1) ) {
            return true;
        }
    }
    return false;

}

int main() {

// variabile
int n=2;

// incrementam n pana obtinem
// o valoare convenabila
while( !verifica(n) ) {
    n++;
}

// afisare raspuns
cout << "n= " << n;

return 0;

}
