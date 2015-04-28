#include <iostream>
using namespace std;

int main() {

int m, n, A[100][100];

do {

    cout << "m= "; cin >> m;
    cout << "n= "; cin >> n;

}
while( m<1 || m>100 || n<1 || n>100 );

for (int i=1; i<=m; i++) {
    for (int j=1; j<=n; j++) {

        A[i][1] = i;
        A[1][j] = j;

    }
}

for (int i=2; i<=m; i++) {
    for (int j=2; j<=n; j++) {

        A[i][j] = A[i-1][j] + A[i][j-1];

    }
}

cout << A[m][n]%10;

return 0;

}
