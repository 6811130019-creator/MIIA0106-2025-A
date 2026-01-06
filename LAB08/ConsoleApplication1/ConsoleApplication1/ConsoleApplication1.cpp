#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string name;
};

int main()
{
    Student s1;

    cout << "=== Input Student 1 ===\n";
    cout << "Name: ";
    cin >> s1.name;
    cout << "\n=== Output Student 1 ===\n";
    cout << "Name: " << s1.name << endl;
}
