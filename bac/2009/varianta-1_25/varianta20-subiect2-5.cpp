#include <iostream>
using namespace std;

int main() {

int n, a[10][10]={0};

do {
    cout << "Nr de linii: ";
    cin >> n;
}
while ( n<=2 || n>=10 );

for (int i=1; i<=n; i++) {

    for (int j=1; j<=n; j++) {

        a[i][1] = i+1;
        a[1][j] = j+1;

    }

}

for (int i=1; i<=n; i++) {

    cout << endl;
    for (int j=1; j<=n; j++)
        cout << a[i][j] << " ";

}

cout << endl;

return 0;

}
