#include <iostream>
#include <string>
using namespace std;
struct Student {
	string StudentID;
	string Nickname;
};
int main() {
	Student s1;
	Student* p = nullptr;
	p = &s1;
	p->StudentID = "6811130019";
	p->Nickname = "Ohm";
	cout << "ID: " << p->StudentID << endl;
	cout << "Nickname: " << p->Nickname << endl;
	return 0;
}