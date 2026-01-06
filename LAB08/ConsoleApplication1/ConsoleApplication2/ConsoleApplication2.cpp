#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string name;
};

int main()
{
    const int SIZE = 5;
    Student student[SIZE];

    for (int i = 0; i < SIZE; i++)
	{
		cout << "=== Input Student ===" << (i + 1) << " ===\n";
		cout << "Name: ";
		cin >> student[i].name;
		cout << endl;
	}
	cout << "=== Student List ===\n";
	for (int i = 0; i < SIZE; i++)
	{
		cout << "Student " << (i + 1) << " Name: " << student[i].name << endl;
	}
	return 0;
}
