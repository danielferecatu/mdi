#include <iostream>
#include <fstream>
using namespace std;

ofstream bac("bac-iulie.txt");

int main() {

long x, y;

cout << "Dati x: ";
cin >> x;

while( x ) {

    if( x==1 ) {
        y/= 10;
    }
    else if( x%2 ) {
        y = (x+1)/2;
    }
    else {
        y = x-1;
    }

    bac << x << " ";
    x = y;

}

bac.close();

return 0;

}
