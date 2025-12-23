#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Function to calculate grade
void calculateGrade(double score, char& grade) {
    if (score >= 80) grade = 'A';
    else if (score >= 70) grade = 'B';
    else if (score >= 60) grade = 'C';
    else if (score >= 50) grade = 'D';
    else grade = 'F';
}

// Function to display student info
void displayStudentInfo(int idx, const string& name, const string& id, double score, char grade) {
    cout << "Student " << idx + 1 << " Information:\n";
    cout << "Student Name: " << name << endl;
    cout << "Student ID : " << id << endl;
    cout << "Score : " << fixed << setprecision(2) << score << endl;
    cout << "Grade : " << grade << endl;
}

int main()
{
    const int N = 5;
    string name[N], id[N];
    double score[N];
    char grade[N];
    // TODO: วนรับข้อมูล N คน
    for (int i = 0; i < N; ++i) {
        cout << "Enter student " << i + 1 << " name: ";
        getline(cin >> ws, name[i]);
        cout << "Enter student " << i + 1 << " id: ";
        getline(cin, id[i]);
        cout << "Enter student " << i + 1 << " score: ";
        cin >> score[i];
        // TODO: calculateGrade(score[i], grade[i]);
        calculateGrade(score[i], grade[i]);
    }
    // TODO: วนแสดงผล N คน ด้วย displayStudentInfo
    for (int i = 0; i < N; ++i) {
        displayStudentInfo(i, name[i], id[i], score[i], grade[i]);
    }
    return 0;
}
