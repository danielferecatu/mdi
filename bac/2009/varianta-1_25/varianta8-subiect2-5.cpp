#include <iostream>
using namespace std;

int main() {

int n, p, a[15][15];


cout<<"Dati numarul de linii: ";
cin >>n;

cout<<"Dati numarul de coloane: ";
cin >>p;


int pp=1;

for (int i=1; i<=n; i++)
    for (int j=1; j<=p; j++) {

        a[i][j] = pp*pp;
        pp += 2;

    }

for (int i=1; i<=n; i++) {

    for (int j=1; j<=p; j++)
        cout << a[i][j] << " ";

    cout << endl;

}

return 0;

}
