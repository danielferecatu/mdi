#include <iostream>
using namespace std;

int main() {

int x, y, n=0;


cout << "x= ";
cin >> x;

cout << "y= ";
cin >> y;


if ( x<y ) {

    int temp = x;
    x = y;
    y = temp;

}

while ( x>=y ) {

    x-= y;
    n++;

}

cout << endl << "n= " << n;
cout << endl << "x= " << x;

return 0;

}
