#include <iostream>
#include <string>
//เขียนฟังก์ชัน Call by Value ต้องแสดงค่าก่อนและหลังการ swap
using namespace std;

void swapByValue(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "Inside swapByValue function: a = " << a << ", b = " << b << endl;
}
int main()
{
	int a = 10;
	int b = 20;
	cout << "Before swapByValue: a = " << a << ", b = " << b << endl;
	swapByValue(a, b);
	cout << "After swapByValue: a = " << a << ", b = " << b << endl;

	return 0;
}