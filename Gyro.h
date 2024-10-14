#ifndef GYRO_H
#define GYRO_H

#include <iostream>
#include <fstream>

class Gyro {
private:
    std::string model;

public:
    Gyro();
    void setModel(const std::string &m);
    void print() const;
    void save(std::ofstream &outFile) const;
};

#endif // GYRO_H
