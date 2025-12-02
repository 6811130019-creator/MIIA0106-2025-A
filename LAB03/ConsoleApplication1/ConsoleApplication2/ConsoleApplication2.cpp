#include <iostream>
#include <string>

int main() {
    int studentID;
    std::string Name;
    int Score;
    char grade;
    
    std::cout << "Enter Student ID: ";
    std::cin >> studentID;
    std::cin.ignore(); // To ignore the newline character after entering studentID
    std::cout << "Enter Name:";
    std::cin >> Name;
    do
    {
        std::cout << "Enter Score:";
        std::cin >> Score;
        if (Score >= 0 && Score <= 100)
			break;
		else
			std::cout << "Invalid Score! Please enter a score between 0 and 100." << std::endl;
    } while (Score >= 0 && Score <= 100);
    if (Score >= 90)
		grade = 'A';
	else if (Score >= 80)
		grade = 'B';
	else if (Score >= 70)
		grade = 'C';
	else if (Score >= 60)
		grade = 'D';
	else
		grade = 'F';
    
    std::cout << "-------Student Report-------" << std::endl;
    std::cout << "Student ID  : " << studentID << std::endl;
    std::cout << "Name        : " << Name << std::endl;
    std::cout << "Score       : " << Score << std::endl;
    std::cout << "Grade       : " << grade << std::endl;
    std::cout << "----------------------------" << std::endl;
}