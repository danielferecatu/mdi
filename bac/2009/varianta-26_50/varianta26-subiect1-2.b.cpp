#include <iostream>
using namespace std;

int main() {

int n, c=0;

do {

    cout << "n= ";
    cin >> n;

}
while ( n<0 );

for ( int i=1; i<=n; i++) {

    c = (c+1)%10;
    cout << c;

}

return 0;

}
