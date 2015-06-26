#include <iostream>
#include <string.h>
using namespace std;

int main() {

char s[100]="in-vacanta---plec---------la--------mare";

//cout << "Dati textul: ";
//cin.getline(s, 100);

int i=0;
while (s[i]=='-') {
    s[i] = s[i+1];
    i++;
}



for (int i=0; i<100; i++) cout << s[i];

return 0;

}
