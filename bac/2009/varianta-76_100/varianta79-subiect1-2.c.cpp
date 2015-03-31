#include <iostream>
using namespace std;

int main() {

int a, x=2, k=0, c;

do {
    cout << "a= ";
    cin >> a;
}
while ( a<0 );

while ( a>1 ) {

    c = 0;

    while ( a%x==0 ) {
        c = x;
        a/= x;
    }

    if ( c!=0 ) k+= x;

    x++;

}

cout << endl << "k= " << k;

return 0;

}
