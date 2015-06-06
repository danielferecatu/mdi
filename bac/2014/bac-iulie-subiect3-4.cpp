#include <fstream>
#include <iostream>
using namespace std;

ifstream f("bac-iulie.txt");

int main() {

int numar, subn, frecv[100]={0};

while(!f.eof()) {

    f >> numar;

    while(numar>9) {

        subn = numar%10 + numar/10%10*10;

        frecv[subn]++;

        numar /= 10;

    }

}

for (int i=1; i<=100; i++) {

    if(frecv[i]>2) cout << i << " ";

}

f.close();

return 0;

}
