#include <iostream>
using namespace std;

int main() {

int n;

cout << "n= ";
cin >> n;

if ( n<0 ) n = -n;

int i=1;

while ( i*i<=n )
    i++;

cout << endl << "i-1= " << i-1;

return 0;

}
