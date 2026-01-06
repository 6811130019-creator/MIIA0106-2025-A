#include <iostream>
#include <string>
using namespace std;
struct Phone
{
string  moblie;
string home;
};
struct parent
{
	string name;
	string relatopnship;
	Phone contract;
};
struct Student
{
	string ID;
	string nickname;
	string lineID;
	Phone Mycontract;
	parent myParent;
	};
void displayStudent (const Student& s)
{
	cout << "Student ID: " << s.ID << endl;
	cout << "Nickname: " << s.nickname << endl;
	cout << "Line ID: " << s.lineID << endl;
	cout << "Mobile: " << s.Mycontract.moblie << endl;
	cout << "Home: " << s.Mycontract.home << endl;
	cout << "Parent Name: " << s.myParent.name << endl;
	cout << "Relationship: " << s.myParent.relatopnship << endl;
	cout << "Parent Mobile: " << s.myParent.contract.moblie << endl;
	cout << "Parent Home: " << s.myParent.contract.home << endl;
}
int main()
{
	Student s1;
	cout << "=== Input Student Information ===\n";
	cout << "ID: ";
	cin >> s1.ID;
	cout << "Nickname: ";
	cin >> s1.nickname;
	cout << "Line ID: ";
	cin >> s1.lineID;
	cout << "Mobile: ";
	cin >> s1.Mycontract.moblie;
	cout << "Home: ";
	cin >> s1.Mycontract.home;
	cout << "=== Input Parent Information ===\n";
	cout << "Parent Name: ";
	cin >> s1.myParent.name;
	cout << "Relationship: ";
	cin >> s1.myParent.relatopnship;
	cout << "Parent Mobile: ";
	cin >> s1.myParent.contract.moblie;
	cout << "Parent Home: ";
	cin >> s1.myParent.contract.home;
	cout << "\n=== Output Student Information ===\n";
	displayStudent(s1);
	return 0;
}
