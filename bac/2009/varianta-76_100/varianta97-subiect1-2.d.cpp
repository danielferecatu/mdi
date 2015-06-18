#include <iostream>
using namespace std;

int main() {

int x, s;

for (int i=1; i<=3; i++) {

    cout << "x= ";
    cin >> x;

    s = 0;

    for (int j=1; j<=i; j++)
        s+= x%10;

}

cout << endl << "s= " << s;

return 0;

}
