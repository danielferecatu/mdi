#include <iostream>
using namespace std;

int main() {

int n, k, pm=0, x, p;

cout << "n= ";
cin >> n;

cout << "k= ";
cin >> k;

for (int i=1; i<=n; i++) {

    x = i;
    p = 0;

    while (x%k==0) {
        x/= k;
        p++;
    }

    if (p>pm) pm = p;

}

cout << pm;

return 0;

}
