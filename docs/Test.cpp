#include <iostream>
#include <stdio.h>
#include <string.h>
#include <bitset>
#include <cmath>
using namespace std;
int main() {
    unsigned int a = 134;
    unsigned int b = 246;
    unsigned int c = a - b;
    unsigned int d = 4294967184;
    int e = d;
    int g = 65536;
    unsigned short int f =  65535;
    short int h = 65535;
    float i = -1;
    cout << h << " " << bitset<sizeof(h)*8>(h) << endl;
    cout << bitset<sizeof(g)*8>(g) << endl;
    cout << bitset<sizeof(f)*8>(f) << endl << f <<endl << g << endl;
    cout << d << endl << e << endl;
    cout << c << endl << bitset<sizeof(a)*8>(a);
    cout << endl << bitset<sizeof(b)*8>(b);
    cout << endl << bitset<sizeof(-b)*8>(-b);
    cout << endl << bitset<sizeof(c)*8>(c);

}
