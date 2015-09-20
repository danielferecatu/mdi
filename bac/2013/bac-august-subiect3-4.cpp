#include <iostream>
#include <fstream>
using namespace std;

ifstream bac("bac-august.txt");

int main() {

int x, b, m=1, tmp;

bac >> x;

tmp = x;

while( tmp ) {
    tmp/= 10;
    m*= 10;
}

while( !bac.eof() ) {

    bac >> b;

    if( b%m==x ) {
        tmp = b;
    }

}

if( tmp ) {
    cout << tmp;
}
else {
    cout << "Nu exista";
}

bac.close();

return 0;

}
