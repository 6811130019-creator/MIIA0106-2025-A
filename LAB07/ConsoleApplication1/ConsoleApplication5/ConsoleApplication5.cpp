// Swap Pointer
#include <iostream>
#include <string>
using namespace std;


void swapValue(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 5, y = 10;

    cout << "Before swap: x = " << x << ", y = " << y << endl;
    swapValue(&x, &y);

    cout << "After swap: x = " << x << ", y = " << y << endl;

    return 0;
}