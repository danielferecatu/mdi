#include <iostream>
using namespace std;

int main() {

int a, b, v, s=0;

do {

    cout << "v= ";
    cin >> v;

}
while ( v<0 );

while ( v!=0 ) {

    a = v%10;
    b = v/10%10;
    s += a*10 + b;

    cout << "v= ";
    cin >> v;

}

cout << endl << "s=" << s;

return 0;

}
