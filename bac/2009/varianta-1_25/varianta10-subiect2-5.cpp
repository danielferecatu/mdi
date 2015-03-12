#include <iostream>
using namespace std;

int main() {

int n, p, a[15][15];

do {

    cout<<"Dati numarul de linii: ";
    cin >>n;

    cout<<"Dati numatul de coloane: ";
    cin >>p;

}
while ( n<2 || n>15 || p<1 || p>15 );

int pp=0;

for (int i=0; i<n; i++)
    for (int j=0; j<p; j++) {

        a[i][j] = pp*pp;
        pp += 2;

    }

for (int i=0; i<n; i++) {

    for (int j=0; j<p; j++)
        cout << a[i][j] << " ";
    cout << endl;

}

return 0;

}
