#include <iostream>
using namespace std;

int main() {

int m, n, A[20][20];

do {

    cout << "m= ";
    cin >> m;

    cout << "n=";
    cin >> n;

}
while ( m<2 || m>50 || n<2 || n>50 );

int p=1;
for (int i=0; i<m; i++)
    for (int j=0; j<n; j++) {
        if (p%5==0) p++;
        A[i][j]=p*2;
        p++;
    }

for (int i=0; i<m; i++) {
    for (int j=0; j<n; j++)
        cout << A[i][j] << " ";
    cout << endl;
}

return 0;

}
