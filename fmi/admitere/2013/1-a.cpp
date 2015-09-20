#include <iostream>
using namespace std;

void s( int n, int p ) {

    // variabile
    int m = 1 << n; // 2^n
    int v[m+2], sters = -1;

    // generarea initiala a vectorului
    for( int i=0; i<=m+1; i++ ) {
        v[i] = i;
    }

    // marcam elementele 0, p si m+1 ca fiind sterse
    v[0] = v[p] = v[m+1] = sters;


    /* procesare:

               vector initial:  0 1 2 3 4 5 6 7 8 9

       pasul  |  el sterse   |  vector
              |              |
           1  |  4           |  _ 1 2 3 _ _ 6 7 8 _
           2  |  2, 6        |  _ 1 _ 3 _ _ _ 7 8 _
           3  |  1, 3, 8, 7  |  _ _ _ _ _ _ _ _ _ _

    */


    // vom sterge la fiecare bucata de dimensiune
    // m/2 si o injumatatim la fiecare pas k
    int chunk = m/2;
    for( int k=1; k<=n; k++ ) {

        for( int i=chunk; i<m; i+= chunk ) {

            if( v[i]!=sters ) {
                v[i] = sters;
                cout << k << " " << i << endl;
            }
            else if( i==p ) {
                v[m] = sters;
                cout << k << " " << m << endl;
            }

        }

        // injumatatim dimensiunea bucatii
        chunk/= 2;

        // afisare
        cout << endl;

    }

}

int main() {

s( 3, 5 );

return 0;

}
