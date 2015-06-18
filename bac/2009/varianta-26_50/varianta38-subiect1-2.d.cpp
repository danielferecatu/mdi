#include <iostream>
using namespace std;

int main() {

int n, p;


cout << "n= ";
cin >> n;
    

for ( int i=1; i<=n; i++ ) {

    p = 1;

    for ( int j=i; j>=2; j-- ) {
        p *= j;
    }

    cout << p/(i*2);

}

return 0;

}
