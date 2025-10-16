#include <iostream>
using namespace std;

float calcArea(float a, float b, float h) {
    return (a + b) / 2.0 * h;
}

int main()
{
    float s1 = calcArea(1, 2, 3);
    float s2 = calcArea(1.5, 2.7, 3.5);

    cout << "\n S1: " << s1 << "\n S2: " << s2 << "\n Sum = " << s1 + s2 << endl;
    cout << "\n S1: " << s1 << "\n S2: " << s2 << "\n Sum = " << s1 + s2 << endl;
    cout << "\n S1: " << s1 << "\n S2: " << s2 << "\n Sum = " << s1 + s2 << endl;
    cout << "\n S1: " << s1 << "\n S2: " << s2 << "\n Sum = " << s1 + s2 << endl;
    cout << "\n S1: " << s1 << "\n S2: " << s2 << "\n Sum = " << s1 + s2 << endl;
    cout << "\n S1: " << s1 << "\n S2: " << s2 << "\n Sum = " << s1 + s2 << endl;
}

 