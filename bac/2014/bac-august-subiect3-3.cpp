#include <iostream>
using namespace std;

int triplete(int n) {

// x < y < z
// x*y + y*z = n
int x=0, y=1, z=n;



// afisare
if (x<y && y<z && (x*y+y*z==n)) {
    cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;
}

}

int main() {

// apelare
triplete(8);

return 0;

}
