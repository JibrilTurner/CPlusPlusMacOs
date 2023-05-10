#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstdlib> 
#include <ctime>
using namespace std;

// Write a function that takes a vector of Student objects and writes the data to a file.
struct Student {
    std::string name;
    std::vector<int> grades;
    std::vector<std::string> dates;
    std::vector<int> id;
};

   void removeAssignment(Student& student, int assignmentIndex) {
    if (assignmentIndex >= 0 && assignmentIndex < student.grades.size()) {
        student.grades.erase(student.grades.begin() + assignmentIndex);
        student.dates.erase(student.dates.begin() + assignmentIndex);
    }
}

void insertSGrade(Student& student, int grade, const std::string& date, int id) {
    student.grades.push_back(grade);
    student.dates.push_back(date);
    student.id.push_back(id);
}


void writeStudentsToFile(const std::vector<Student>& students, const std::string& filename) {
    std::ofstream outputFile(filename);
    if (!outputFile) {
        std::cout << "Error opening file " << filename << std::endl;
        return;
    }

    for (int i = 0; i < students.size(); i++) {
        const Student& student = students[i];
        outputFile << "Name: " << student.name << std::endl;
        for (int j = 0; j < student.grades.size(); j++) {
            outputFile << "Assignment " << (j + 1) << ":" << std::endl;
            outputFile << "Grade: " << student.grades[j] << std::endl;
            outputFile << "Date: " << student.dates[j] << std::endl;
            outputFile << "ID: " << student.id[j] << std::endl;
            outputFile << std::endl;
        }
    }

    outputFile.close();
    std::cout << "Student data written to " << filename << std::endl;
}

int idMaker() {

    int id = rand() % 100000;  // Generate a random number between 0 and 1

    return id;
}
int main() {
    std::vector<Student> students;
    
    // Create and populate the first student
    Student john;
    john.name = "John";
    insertSGrade(john, 90, "1/1/2020", idMaker());
    insertSGrade(john, 70, "1/3/2020", idMaker());
    insertSGrade(john, 85, "1/5/2020", idMaker());
    insertSGrade(john, 100, "1/7/2020", idMaker());
    insertSGrade(john, 95, "1/9/2020", idMaker());
    insertSGrade(john, 80, "1/11/2020", idMaker());
    insertSGrade(john, 75, "1/13/2020", idMaker());
    insertSGrade(john, 65, "1/15/2020", idMaker());
    insertSGrade(john, 70, "1/17/2020", idMaker());
    insertSGrade(john, 75, "1/19/2020", idMaker());
    insertSGrade(john, 80, "1/21/2020", idMaker());

    
    // removeAssignment(john, 1);
    
    // Add John to the students vector
    students.push_back(john);
    
    // Create and populate the second student
    Student alice;
    alice.name = "Alice";
    insertSGrade(alice, 85, "2/1/2020", idMaker());

    // removeAssignment(alice, 0);
    
    // Add Alice to the students vector
    students.push_back(alice);
    
    // Write student data to file
    writeStudentsToFile(students, "students.txt");
    
    return 0;
}
