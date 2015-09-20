#include <iostream>
using namespace std;

int main() {

int m, n, A[100][100];


cout << "m= ";
cin >> m;

cout << "n= ";
cin >> n;


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
