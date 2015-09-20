#include <iostream>
#include <fstream>
using namespace std;

ifstream f("sesiuneaspeciala-bac.txt");

int main() {

long mlen=0, len=1, mt=0, t=11, x=0, y=0;

while ( !f.eof() ) {

    f >> x;

    if( x==y ) {
        len++;
        t = x;
    }
    else {
        len=1;
    }

    if( len>=mlen ) {
        mlen = len;
        mt = t;
    }

    y = x;

}

for( int i=1; i<=mlen; i++ ) {
    cout << mt << " ";
}

return 0;

}
