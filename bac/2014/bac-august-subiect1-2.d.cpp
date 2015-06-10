#include <iostream>
using namespace std;

int main() {

int n=0, a, b, c, x;

do {

    do {
        cout << "x= ";
        cin >> x;
    }
    while (x<0);

    a = 0;
    b = 1;

    do {
        c = a+b;
        a = b;
        b = c;
    }
    while (c<x);

    if ( x==c ) n++;

}
while (x>0);


cout << endl << "n= " << n << endl;

return 0;

}
