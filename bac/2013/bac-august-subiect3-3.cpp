#include <iostream>
using namespace std;

int sub(int n, int v[], int k) {

int s=0, x=0;

for (int i=0; i<n; i++) {

    if (v[i]%2 && x<k) {

        s+= v[i];
        x++;

    }

}

if (x==k) return s;
else return -1;

}

int main() {

int vect[50] = {2, 7, 6, 8, 3, 7, 5, 1};

cout << sub(8, vect, 3);

return 0;

}
