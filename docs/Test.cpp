#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
    int A[10] = {0};
    cout << sizeof(A)/sizeof(A[0]);
    return 0;
}
