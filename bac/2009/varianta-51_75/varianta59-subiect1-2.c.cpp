#include <iostream>
using namespace std;

int main() {

int n;

do {

    cout << "n= ";
    cin >> n;

}
while ( n<0 );


do {

    n += n%10;
    n /= 10;

}
while ( n>=10 );

cout << endl << "n= " << n;

return 0;

}
