#include <iostream>
using namespace std;

int main() {

int x, aux, t;


cout << "x= ";
cin >> x;


aux = x;
t = 1;

while ( aux>9 ) {

    aux/=10;
    t*=10;

}

aux = x;

do {

    int c = x%10;
    x/=10;
    x = c*t + x;

}
while ( x!=aux );

cout << endl <<"t=" << t << endl;

return 0;

}
