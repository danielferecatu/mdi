#include <iostream>
using namespace std;

int main() {

int a, b, c, s=0, x, y;

a = 19;
b = 23;
c = 2;

for (x=a; x<=b; x++) {

    y = x;

    while ( y>0 ) {

        if ( y%10==c) s++;
        y/= 10;
    }

}

cout << endl << s << endl;

return 0;

}
