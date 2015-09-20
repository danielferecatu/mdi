#include <iostream>
using namespace std;

int main() {

int m, n, a[51][51];

cout << "m= ";
cin >> m;

cout << "n= ";
cin >> n;

for( int i=1; i<=n; i++ ) {
    for( int j=1; j<=m; j++ ) {
        cout<<"a["<<i<<"]["<<j<<"]= ";
        cin >> a[i][j];
    }
}

for( int i=1; i<=n; i++ ) {
    a[i][m-1] = a[i][m];
}
for( int j=1; j<=n; j++ ) {
    a[n-1][j] = a[n][j];
}

for( int i=1; i<n; i++ ) {
    for( int j=1; j<m; j++ ) {
        cout << a[i][j] << " ";
    }
    cout << endl;
}

return 0;

}
