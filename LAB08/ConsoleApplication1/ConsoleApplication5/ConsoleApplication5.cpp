#include <iostream>
#include <string>
using namespace std;
struct Address
{
    int number;
    char road[20];
    char district[20];
    char province[20];
};
struct Phone
{
    char home[10];
    char mobile[10];
};
struct Student
{
    char id[9];
	char name[20];
    char surname[20];
	Address address;
	Phone phone;
};
void printStudent(Student s1)
{
	cout << "Student Information:\n";
	cout << "ID: " << s1.id << endl;
	cout << "Name: " << s1.name << endl;
	cout << "Surname: " << s1.surname << endl;
	cout << "Address: " << s1.address.number << " " << s1.address.road << ", "<< s1.address.district << ", " << s1.address.province << endl;
	cout << "Phone (Home): " << s1.phone.home << endl;
	cout << "Phone (Mobile): " << s1.phone.mobile << endl;
}

int main()
{
	Student s1;
	cout << "=== Input Student 1 ===\n";
	cout << "ID: ";
	cin >> s1.id;
	cout << "Name: ";
	cin >> s1.name;
	cout << "Surname: ";
	cin >> s1.surname;
	cout << "Address Number: ";
	cin >> s1.address.number;
	cout << "Address Road: ";
	cin >> s1.address.road;
	cout << "Address District: ";
	cin >> s1.address.district;
	cout << "Address Province: ";
	cin >> s1.address.province;
	cout << "Phone (Home): ";
	cin >> s1.phone.home;
	cout << "Phone (Mobile): ";
	cin >> s1.phone.mobile;
	cout << "\n=== Output (from Function) ===\n";
	printStudent(s1);
    return 0;
}
