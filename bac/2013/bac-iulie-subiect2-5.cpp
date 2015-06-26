#include <iostream>
using namespace std;

int main() {

int m, n, e, a[50][50];
int i;
bool exista=0;

cout << "m= ";
cin >> m;

cout << "n= ";
cin >> n;

for (int i=0; i<m; i++)
    for (int j=0; j<n; j++) {
        cout<<"a["<<i<<"]["<<j<<"]= ";
        cin >> a[i][j];
    }

for (int j=0; j<n; j++) {

    e = 1;

    for (i=1; i<m; i++)
        if ( a[i][j] == a[i-1][j] ) {
            e++;
        }

    if ( e==n-1 ) {

        exista = 1;
        cout << a[i-1][j] << " ";

    }

}

if (!exista) cout << "Nu exista";

return 0;

}
