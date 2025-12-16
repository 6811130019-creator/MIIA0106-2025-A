#include <iostream>
#include <string>
//เขียนฟังก์ชัน Call by Reference ต้องแสดงค่าก่อนและหลังการ swap
using namespace std;

void swapByReference(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "Inside swapByReference function: a = " << a << ", b = " << b << endl;
}
int main()
{
    int a = 10;
	int b = 20;
	cout << "Before swapByReference: a = " << a << ", b = " << b << endl;
	swapByReference(a, b);
	cout << "After swapByReference: a = " << a << ", b = " << b << endl;

	return 0;
}