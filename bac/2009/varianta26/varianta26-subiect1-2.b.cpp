#include <iostream>
using namespace std;

int main() {

int n, c=0;

cout << "n= ";
cin >> n;


for ( int i=1; i<=n; i++) {

    c = (c+1)%10;
    cout << c;

}

return 0;

}
