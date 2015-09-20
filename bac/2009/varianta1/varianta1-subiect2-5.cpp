#include <iostream>
using namespace std;

int main() {

int m, n, A[10][10], i, j;


cout << "Linii n: ";
cin >> n;

cout << "Coloane m: ";
cin >> m;

cout << endl;


for ( i=1; i<=n; i++ )
    for ( j=1; j<=m; j++ ) {

        if ( i<j ) A[i][j] = i;
        else A[i][j] = j;

    }

for ( i=1; i<=n; i++) {
    for ( j=1; j<=m; j++ ) {
        cout << A[i][j] << " ";
    }

    cout << endl;
}

return 0;

}
