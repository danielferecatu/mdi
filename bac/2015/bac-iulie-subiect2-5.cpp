#include <iostream>
#include <string.h>
using namespace std;

int main() {

int n, a[20][20], p[20], u;

cout << "n= ";
cin >> n;

for (int i=0; i<n; i++) {
    cout << "p["<<i<<"]= ";
    cin >> p[i];
}

for (int i=0; i<n; i++) {

    for (int j=0; j<n; j++)
        a[i][j] = p[j];

    u = p[n-1];
    for (int i=n-1; i>0; i--)
        p[i] = p[i-1];
    p[0] = u;

}

cout << endl;

for (int i=0; i<n; i++) {

    for (int j=0; j<n; j++)
        cout << a[i][j] << " ";
    cout << endl;

}

return 0;

}
