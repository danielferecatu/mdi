#include <iostream>
using namespace std;

int main() {

int x, z=0;

do {
    cout << "x= "; cin >> x;
}
while (x<=0);

do {

    int c = x%10;

    if ( c%2!=0 ) z = z*10 + c-1;
    else z = z*10 + c;

    x /= 10;

}
while ( x!=0 );

cout << endl << "z=" << z;


}
