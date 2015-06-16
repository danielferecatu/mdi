#include <iostream>
using namespace std;

int f(int a, int b) {

    if ( a==b ) return 0;

    if ( b/a==0 ) return a+b;

    return f(a+2, b-3);

}


int main() {

cout << f(5, 5) <<  endl;
cout << f(10, 21);

return 0;

}
