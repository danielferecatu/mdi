#include <fstream>
#include <iostream>
#include <algorithm>
using namespace std;

ifstream f("bac-august.txt");

int main() {

int n, numar, E=0, arr[10000];

f >> n;

while(!f.eof()) {

    f >> numar;
    arr[E]=numar;
    E++;

}

if (E<n) cout << "Nu exista";
else {

    sort(arr, arr+E);
    cout << arr[n-1];

}

f.close();

return 0;

}
