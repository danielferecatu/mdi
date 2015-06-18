#include <iostream>
#include <math.h>
using namespace std;

int main() {

float x, y;


cout << "x= ";
cin >> x;


y = floor(x);
x -= y;

while ( x!=floor(x) ) {

    x *= 10;

}

if ( x==y ) cout << "1";
else cout << "2";

return 0;

}
