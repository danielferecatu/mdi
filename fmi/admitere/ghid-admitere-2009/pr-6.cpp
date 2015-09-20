#include <iostream>
using namespace std;

// variabile globale
const int nmax=100;
int a[nmax][nmax]; // matrice de adiacenta
int sol[nmax], n, k, nr;

bool ok( int pers, int completare ) {

    for( int i=0; i<completare; i++ ) {
        if( a[pers][sol[i]] ) {
            return false;
        }
    }
    return true;

}

// t = cate elemente mai trebuie stabilite
// inf = valoarea minima a elementelor
void bk( int t, int inf ){

    if( t==0 ) {
        nr++;
    }
    else {
        for( int i=inf; i<=n; i++ ) {
            if( ok( i, k-t ) ) {
                sol[k-t] = i;
                bk( t-1, i+1 );
            }
        }
    }

}

int main() {

// variabile
int t, m, i, j;

//citire date
cout << "n= ";
cin >> n;
cout << "m= ";
cin >> m;
cout << "k= ";
cin >> k;

for (i=0; i<n; i++) {
    for (j=0; i<n; j++) {
        a[i][j] = 0;
    }
}

for (int t=0; t<m; t++) {

    cout << "i" << t << "= ";
    cin >> i;
    cout << "j" << t << "= ";
    cin >> j;

    a[i][j] = a[j][i] = 1;

}

// generam toate combinarile de n luate cate k
// prin backtracking so le numaram pe cele acceptabile
nr = 0;
bk( k,1 );

// afisare rezultat
cout << "exista " << nr << " variante" << endl;

return 0;

}
