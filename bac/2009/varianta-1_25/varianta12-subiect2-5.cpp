#include <iostream>
using namespace std;

int main() {

int n, a[25][25];

do {

    cout << "n= ";
    cin >> n;

}
while ( n<=2 || n>=25 );

cout << endl;

for (int i=1; i<=n; i++) {

    for (int j=1; j<=n; j++) {

        a[i][j]=i*j%10;
        cout << a[i][j] << " ";

    }

    cout << endl;

}

return 0;

}
