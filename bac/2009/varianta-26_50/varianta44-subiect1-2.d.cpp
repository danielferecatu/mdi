#include <iostream>
using namespace std;

int main() {

int x, y=0;


cout << "x= ";
cin >> x;


while ( x>y ) {

    y = y*10 + 9 - x%10;

}

cout << endl << "y=" << y;

return 0;

}
