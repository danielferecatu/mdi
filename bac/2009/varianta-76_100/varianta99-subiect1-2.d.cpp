#include <iostream>
using namespace std;

int main() {

int x, p;

cout << "x= ";
cin >> x;

if ( x<0 ) x = -x;

p = 1;

for (int i=1; i<=x; i++) p = (p*4)%10;

cout << endl << "p= " << p;

return 0;

}
