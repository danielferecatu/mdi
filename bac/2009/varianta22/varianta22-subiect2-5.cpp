#include <iostream>
using namespace std;

int main() {

int m, n, a[20][20];

do {

    cout << "m= "; cin >> m;
    cout << "n= "; cin >> n;

}
while ( m<1 || m>20 || n<1 || n>20 );

for (int i=m; i>=1; i--)
    for (int j=n; j>=1; j--) {
        a[i][j] = i*j;
    }

cout << endl;

for (int i=m; i>=1; i--) {

    for (int j=n; j>=1; j--)
        cout << a[i][j] << " ";

    cout << endl;

}

return 0;

}
