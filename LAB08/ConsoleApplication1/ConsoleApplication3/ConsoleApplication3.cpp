#include <iostream>
#include <string>
using namespace std;
struct Student {
	float id;
	string nickname;
	string lineID;
	float phone;
};
void printStudent(Student s1) {
	cout << "Student Information:\n";
	cout << "ID: " << s1.id << endl;
	cout << "Nickname: " << s1.nickname << endl;
	cout << "Line ID: " << s1.lineID << endl;
	cout << "Phone: " << s1.phone << endl;
}
int main() {
	Student s1;
	cout << "=== Input Student 1 ===\n";
	cout << "ID: ";
	cin >> s1.id;
	cout << "Nickname: ";
	cin >> s1.nickname;
	cout << "Line ID: ";
	cin >> s1.lineID;
	cout << "Phone: ";
	cin >> s1.phone;
	cout << "\n=== Output (from Function) ===\n";
	printStudent(s1);
	return 0;
}