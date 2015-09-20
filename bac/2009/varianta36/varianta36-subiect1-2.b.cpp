#include <iostream>
using namespace std;

int main() {

int a, b, s=0;

int v[99];

for (int i=0; i<99; i++) {

    v[i]=i+1;

    a = v[i]%10;
    b = v[i]/10%10;
    s += a*10 + b;

    cout << "v=" << v[i] << " s=" << s << endl;

}

return 0;

}
