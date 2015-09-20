#include <iostream>
using namespace std;

int main() {

int m, n, a[50][50], i, j;

cout << "m= ";
cin >> m;

cout << "n= ";
cin >> n;

int x=1;

for( i=0; i<m; i++ ) {
    a[i][0] = x;
    x+= 2;
}

for( i=0; i<m; i++ ) {
    for( j=1; j<n; j++ ) {
        a[i][j] = a[i][j-1]+1;
    }
}

for ( i=0; i<m; i++) {
    for ( j=0; j<n; j++ ) {
        cout << a[i][j] << " ";
    }
    cout << endl;
}

return 0;

}
