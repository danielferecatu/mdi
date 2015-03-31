#include <iostream>
using namespace std;

int main() {

int a, k=0, b;

do {
    cout << "a= ";
    cin >> a;
}
while ( a<0 );

while ( a!=0 ) {

    do {
        cout << "b= ";
        cin >> b;
    }
    while ( b<0 );

    if ( a%10==b%10 ) k++;

    a = b;

}

cout << endl << "k= " << k;

return 0;

}
