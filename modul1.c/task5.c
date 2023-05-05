#include <stdio.h>
#include <math.h>

int main() {
    float a = 30.0, b = 18.0, c = 25.0;
    float s = (a + b + c) / 2.0;
    //Визначається площа трикутника area за формулою Герона
    float area = sqrt(s * (s - a) * (s - b) * (s - c));
    //Радіус вписаного кола r обчислюється як відношення площі трикутника до його полупериметру
    float r = area / s;
    printf("Радіус вписаного кола: %f\n", r);
    return 0;
}
