#include <iostream>
using namespace std;

int main() {

int n, k, nr=0, p=1;

cout << "n= ";
cin >> n;

cout << "k= ";
cin >> k;

while ( n!=0 && k!=0 ) {

    if ( n%2==0 ) {

        nr += n%10*p;
        p *= 10;

    }
    else {

        k--;

    }

    n /= 10;

}

cout << endl << "nr=" << nr;

return 0;

}
