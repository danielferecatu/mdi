#include <iostream>
using namespace std;

int main() {

int a, b, c, s=0, x, y;

a = 1;
c = 1;

// 19, 20
b = 19;

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
