#include <iostream>
using namespace std;

int main() {

int n, k;


cout << "n= ";
cin >> n;

cout << "k= ";
cin >> k;


for (int i=1; i<=n; i++) {

    if ( i/k==0 ) {
        cout << i;
        k--;
    }
    else cout << i%k;

}


return 0;

}
