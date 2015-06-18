#include <fstream>
#include <iostream>
using namespace std;

ifstream f("bac-iulie.txt");

int main() {

int numar, subn, frecv[100]={0};

while(!f.eof()) {

    f >> numar;

    while(numar>9) {

        subn = numar%100;

        frecv[subn]++;

        numar /= 10;

    }

}

int maxim=0;
for (int i=10; i<=99; i++)
    if (frecv[i]>maxim) maxim = frecv[i];

for (int i=10; i<=99; i++)
    if(frecv[i]==maxim) cout << i << " ";

f.close();

return 0;

}
