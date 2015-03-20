#include <iostream>
using namespace std;

int main() {

int n, a[5][5];

do {

    cout << "n= ";
    cin >> n;

}
while ( n<=999 || n>9999 );

cout << endl;

for (int j=1; j<=4; j++) {

    for (int i=1; i<=4; i++)
        a[i][j] = n%10;

    n/=10;

}

for (int i=1; i<=4; i++) {

    for (int j=1; j<=4; j++)
        cout << a[i][j] << " ";

    cout << endl;

}

return 0;

}
