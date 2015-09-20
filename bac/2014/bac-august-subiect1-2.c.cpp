#include <iostream>
using namespace std;

int main() {

int n=0, a, b, c, x;
int i=0, v[]={4, 6, 7, 0};

x = v[i];

a = 0;
b = 1;

do {
    c = a+b;
    a = b;
    b = c;
}
while( c<x );

if( x==c ) {
    n++;
}

i++;

while( x>0 ) {

    x = v[i];

    a = 0;
    b = 1;

    do {
        c = a+b;
        a = b;
        b = c;
    }
    while( c<x );

    if( x==c ) {
        n++;
    }

    i++;

}

cout << "n= " << n;

return 0;

}
