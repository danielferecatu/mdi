#include <iostream>
using namespace std;

int main() {

int n, a[23][23];


cout<<"Dati numarul de linii si coloane: ";
cin >>n;


for (int i=0; i<n; i++)
    for (int j=0; j<n; j++) {

        cout << "a["<<i<<"]["<<j<<"]= ";
        cin >> a[i][j];

    }
cout << endl;


for (int j=0; j<n; j++)
    cout << a[0][j] << " ";

for (int i=1; i<n; i++)
    cout << a[i][n-1] << " ";

for (int j=n-2; j>=0; j--)
    cout << a[n-1][j] << " ";

for (int i=n-1; i>1; i--)
    cout << a[i][n-1] << " ";

return 0;

}
