#include <iostream>
using namespace std;

int main() {

int x, y;

do {

    cout << "x= ";
    cin >> x;

    cout << "y= ";
    cin >> y;

}
while ( x<0 && y<0 );

if ( x<y ) {

    int aux;

    aux = x;
    x = y;
    y = aux;

}

while ( x>=y ) {

    cout << "A";

    x -= y;

    cout << "B";

}

return 0;

}
