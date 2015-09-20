#include <iostream>
using namespace std;

int main() {

int n, r=0;


cout << "n= ";
cin >> n;


do {

    r = (r*10+n%10)*10;
    n /= 100;

}
while ( n>=10 );

cout << endl << "r= " << r;

return 0;

}
