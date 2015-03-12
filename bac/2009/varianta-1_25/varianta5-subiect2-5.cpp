#include <iostream>
using namespace std;

int main() {

int m, n, A[10][10];

do {

    cout<<"Dati numarul de linii: ";
    cin >>n;

    cout<<"Dati numarul de coloane: ";
    cin >>m;

}
while ( m<2 || m>10 || n<2 || n>10 );

for (int i=1; i<=n; i++)
    for (int j=1; j<=m; j++) {
        if ( i>j ) A[i][j]=i;
        else       A[i][j]=j;
    }

for (int i=1; i<=n; i++) {
    for (int j=1; j<=m; j++)
        cout << A[i][j] << " ";
    cout << endl;
}

return 0;

}
