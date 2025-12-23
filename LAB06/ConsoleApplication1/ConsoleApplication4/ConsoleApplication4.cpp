#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Function to calculate grade
void calculateGrade(double score, char& grade) {
    if (score >= 80) grade = 'B';
    else if (score >= 70) grade = 'C';
    else if (score >= 60) grade = 'D';
    else if (score >= 50) grade = 'F';
    else grade = 'F';
}

// Function to display student info
void displayStudentInfo(const string& name, const string& id, double score, char grade) {
    cout << "Student Name: " << name << endl;
    cout << "Student ID : " << id << endl;
    cout << "Score : " << fixed << setprecision(2) << score << endl;
    cout << "Grade : " << grade << endl;
}

int main()
{
    int size;
    cout << "Enter number of students: ";
    cin >> size;
    cin.ignore(); // เคลียร์ newline ก่อน getline

    string* name = new string[size];
    string* id = new string[size];
    double* score = new double[size];
    char* grade = new char[size];

    // วนรับข้อมูล size คน
    for (int i = 0; i < size; ++i) {
        cout << "Enter student " << i + 1 << " name: ";
        getline(cin >> ws, name[i]);
        cout << "Enter student " << i + 1 << " id: ";
        getline(cin, id[i]);
        cout << "Enter student " << i + 1 << " score: ";
        cin >> score[i];
        calculateGrade(score[i], grade[i]);
    }

    // วนแสดงผล size คน
    for (int i = 0; i < size; ++i) {
        displayStudentInfo(name[i], id[i], score[i], grade[i]);
    }

    // delete[] ให้ครบทุกตัวแปร
    delete[] name;
    delete[] id;
    delete[] score;
    delete[] grade;

    return 0;
}
