#include <iostream>
using namespace std;

int main() {

int n, k=0;


cout << "n= ";
cin >> n;


for (int i=1; i<=n; i++) {

    for (int j=1; j<=i; j++) {

        cout << i+j;
        k++;

    }

}

cout << endl << "k=" << k;

return 0;

}
