#include <iostream>
using namespace std;

int main() {

int a, b, c, s=0, x, y;

cout << "a= ";
cin >> a;

cout << "b= ";
cin >> b;

cout << "c= ";
cin >> c;

for( x=a; x<=b; x++ ) {

    y = x;

    if( y>0 ) {

        do {
            if( y%10==c ) {
                s++;
            }
            y/= 10;
        }
        while( y>0 );

    }

}

cout << endl << s << endl;

return 0;

}
