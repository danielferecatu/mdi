#include <iostream>
using namespace std;

int main() {

int maxim, i;

cout << "maxim= ";
cin >> maxim;

cout << "i= ";
cin >> i;

while( i ) {

    cout << "i= ";
    cin >> i;

    if( i>maxim ) {
        maxim = i;
    }

}

cout << "maxim= " << maxim << endl;

return 0;

}
