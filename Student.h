#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <fstream>

class Student {
private:
    std::string id;
    std::string name;

public:
    Student();
    void setID(const std::string &studentID);
    void setName(const std::string &studentName);
    void print() const;
    void save(std::ofstream &outFile) const;
};

#endif // STUDENT_H
