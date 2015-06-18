#include <iostream>
using namespace std;

int main() {

int n, a[6][6];


cout << "n= ";
cin >> n;


cout << endl;

for (int i=1; i<=5; i++) {

    for (int j=1; j<=5; j++)
        a[i][j]=n%10;

    n/=10;

}

for (int i=1; i<=5; i++) {

    for (int j=1; j<=5; j++)
        cout << a[i][j] << " ";

    cout << endl;

}

return 0;

}
