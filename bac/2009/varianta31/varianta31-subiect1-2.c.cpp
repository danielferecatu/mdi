#include <iostream>
using namespace std;

int main() {

int a, b, k=0;


cout << "a= ";
cin >> a;


b = (a+1)*(a+2)/2;

while ( b>=a ) {

    b -= a;
    k++;

}

cout << endl << "b=" << b << endl << "k=" << k;

return 0;

}
