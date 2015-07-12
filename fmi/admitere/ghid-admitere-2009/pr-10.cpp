#include <iostream>
#include <math.h>
using namespace std;

int main() {

float x, y;

cout << "x= ";
cin >> x;

if( x<0 ) {
    y = 4*powf(x,3) + 5*powf(x,2) - 2*x +1;
}
else if( x==0 ) {
    y = 100.0;
}
else {
    y = 2*powf(x,2) + 8*x - 1;
}

cout << "y(x)= " << y << endl;

return 0;

}
