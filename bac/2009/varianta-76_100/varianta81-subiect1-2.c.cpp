#include <iostream>
using namespace std;

int main() {

int a, n;


cout << "a= ";
cin >> a;

cout << "n= ";
cin >> n;


for (int i=1; i<=n; i++) {

    if ( i%2==0 ) a--;
    else a++;

}

cout << endl << "a=" << a;

return 0;

}
