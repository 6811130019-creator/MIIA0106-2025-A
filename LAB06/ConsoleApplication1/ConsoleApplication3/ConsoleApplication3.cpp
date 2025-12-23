#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Function to calculate grade
void calculateGrade(double total, char& grade) {
    if (total >= 80) grade = 'A';
    else if (total >= 70) grade = 'B';
    else if (total >= 60) grade = 'C';
    else if (total >= 50) grade = 'D';
    else grade = 'F';
}

// Function to display student info
void displayStudentInfo(const string& name, const string& id, double total, char grade) {
    cout << "----------------------------\n";
    cout << "Student Name: " << name << endl;
    cout << "Student ID : " << id << endl;
    cout << "Score : " << fixed << setprecision(2) << total << endl;
    cout << "Grade : " << grade << endl;
}

int main()
{
    const int N = 3; // students
    const int M = 4; // subjects

    string name[N], id[N];
    double score[N][M];
    double total[N];
    char grade[N];

    // TODO: วนรับ name/id
    for (int i = 0; i < N; ++i) {
        cout << "Enter student " << i + 1 << " name: ";
        getline(cin >> ws, name[i]);
        cout << "Enter student " << i + 1 << " id: ";
        getline(cin, id[i]);
        total[i] = 0;
        // TODO: nested loop รับคะแนน M วิชา + รวม total[i]
        for (int j = 0; j < M; ++j) {
            cout << "Enter student " << i + 1 << " score" << j + 1 << ": ";
            cin >> score[i][j];
            total[i] += score[i][j];
        }
        // TODO: calculateGrade(total[i], grade[i]);
        calculateGrade(total[i], grade[i]);
    }

    // TODO: แสดงผลโดยใช้ displayStudentInfo(name[i], id[i], total[i], grade[i]);
    for (int i = 0; i < N; ++i) {
        displayStudentInfo(name[i], id[i], total[i], grade[i]);
    }

    return 0;
}
