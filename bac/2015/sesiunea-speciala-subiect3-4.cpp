#include <iostream>
#include <fstream>
using namespace std;

int main() {

long x, p=0, i=999999999;
bool k=1;

ifstream f("date.in");

while( !f.eof() ) {

    f >> x;

    if( x%2==0 ) {
        if( x<p ) {
            cout << "NU";
            k = 0;
            break;
        }

        p = x;
    }
    else {
        if( x>i ) {
            cout << "NU";
            k = 0;
            break;
        }

        i = x;
    }

}

if( k ) {
    cout << "DA";
}

return 0;

}
