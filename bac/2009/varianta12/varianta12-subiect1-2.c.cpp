#include <iostream>
using namespace std;

int main() {

int x, y=0;


cout << "x= ";
cin >> x;


while ( x!=0 ) {

    while ( x>9 ) {

        x /= 10;

    }

    y = y*10+x;

    cout << "x= ";
    cin >> x;

}

cout << endl << "y=" << y;

return 0;

}
