#include <iostream>
#include <fstream>
using namespace std;

ifstream bac("bac-iulie.txt");

int main() {

int x, y, a, v[100]={-1};

for( int i=0; i<100; i++ ) {
    v[i] = -1;
}

while( !bac.eof() ) {
    bac >> a;
    v[a] = a;
}

for( int i=0; i<100; i++ ) {

    if( v[i]!=-1 ) {
        x=v[i];
    }

    while( v[i]==-1 ) {
        i++;
    }
    y = v[i];

    if( (y-x)>=2 ) {
        cout << x << " " << y << endl;
    }

}

return 0;

}
