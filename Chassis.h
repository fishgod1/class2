#ifndef CHASSIS_H
#define CHASSIS_H

#include <iostream>
#include <fstream>

class Chassis {
private:
    std::string id;
    std::string model;

public:
    Chassis();
    void setID(const std::string &carID);
    void setModel(const std::string &m);
    void print() const;
    void save(std::ofstream &outFile) const;
};

#endif // CHASSIS_H
