#include <iostream>
#include <string>
#include <cmath>
using namespace std;
//ฟังค์ชั่น เก็บค่าไปเรื่อยๆ เมื่อรันโปรแกรมให้แสดงค่ามากสุดและใช้ for while หรือ do while ก็ได้ และนับจำนวนค่าที่ใส่แสดงผลลัพธ์ออกมาว่ามีกี่ค่า
double MaximumValue()
{
	double number;
	double maxNumber = -INFINITY; // เริ่มต้นค่ามากสุดเป็นลบอนันต์
	int count = 0;

	cout << "Enter numbers (type '0' to quit): " << endl;
	while (true)
	{
		string input;
		cin >> input;

		if (input == "0")
		{
			break; // ออกจากลูปถ้าผู้ใช้พิมพ์ '0'
		}

		try
		{
			number = stod(input); // แปลงสตริงเป็นตัวเลข
			count++; // นับจำนวนค่าที่ใส่

			if (number > maxNumber)
			{
				maxNumber = number; // อัปเดตค่ามากสุด
			}
		}
		catch (invalid_argument&)
		{
			cout << "Invalid input. Please enter a number or '0' to quit." << endl;
		}
	}

	if (count > 0)
	{
		cout << "Maximum value entered: " << maxNumber << endl;
		cout << "Total numbers entered: " << count << endl;
	}
	else
	{
		cout << "No numbers were entered." << endl;
	}

	return maxNumber;
}
int main()
{
	double maxVal = MaximumValue();
    return 0;
}