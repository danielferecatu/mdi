#include <iostream>
using namespace std;

int main() {

int x, d=2;


cout << "x= ";
cin >> x;


cout << endl << "x=" << x << endl;

while ( x>=d ) {

    while ( x%d==0 ) {

        x /= d;
        cout << "d=" << d;
        cout << "x=" << x << endl;

    }

    d++;

}

return 0;

}
