#include <iostream>
using namespace std;

int main() {

int a=5, b=7;

cout << "initial ";
cout << "a=" << a << " b=" << b << endl << endl;

int t=a;
a=b;
b=t;

cout << "a=" << a << " b=" << b << endl;

a+= b;
b = a-b;
a-= b;

cout << "a=" << a << " b=" << b << endl;

return 0;

}
