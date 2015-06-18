#include <iostream>
using namespace std;

int main() {

int n, a[40][40];


cout << "n= ";
cin >> n;


cout << endl;

for (int i=1; i<=n; i++)
    a[i][n+1-i]=0;

for (int i=1; i<=n; i++)
    for (int j=1; j<=n; j++) {

        if ( i+j<n+1 ) a[i][j]=1;
        else if ( i+j>n+1 ) a[i][j]=2;

    }

for (int i=1; i<=n; i++){

    for (int j=1; j<=n; j++)
        cout << a[i][j] << " ";

    cout << endl;

}

return 0;

}
