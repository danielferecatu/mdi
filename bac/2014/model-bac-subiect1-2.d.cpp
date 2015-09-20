#include <iostream>
using namespace std;

int main() {

int a, b, nr=0, i, x;

cout << "a= ";
cin >> a;

cout << "b= ";
cin >> b;

i=a;
do {
    x = i;
    while( x>9 && 1+x%10==x/10%10 ) {
        x/= 10;
    }

    if( x<10 ) {
        nr++;
    }

    i++;
}
while( i<b );

cout << "nr= " << nr;

return 0;

}
