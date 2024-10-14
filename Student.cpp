#include "Student.h"

Student::Student() {}

void Student::setID(const std::string &studentID) {
    id = studentID;
}

void Student::setName(const std::string &studentName) {
    name = studentName;
}

void Student::print() const {
    std::cout << "学生学号: " << id << ", 姓名: " << name << std::endl;
}

void Student::save(std::ofstream &outFile) const {
    outFile << "学生学号: " << id << ", 姓名: " << name << "\n";
}
