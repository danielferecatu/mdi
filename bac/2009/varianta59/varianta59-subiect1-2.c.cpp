#include <iostream>
using namespace std;

int main() {

int n;


cout << "n= ";
cin >> n;


do {

    n += n%10;
    n /= 10;

}
while ( n>=10 );

cout << endl << "n= " << n;

return 0;

}
