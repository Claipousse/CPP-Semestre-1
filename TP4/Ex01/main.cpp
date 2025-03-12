#include <iostream>

#include "tp4.h"
using namespace std;

int main() {
    int a = 0;
    int b = 0;
    cout << "Input number A :";
    cin >> a;
    cout << "Input number B :";
    cin >> b;
    int max = getMax(a, b);
    cout << "Le maximum est : "<< max << endl;
    return 0;
}
