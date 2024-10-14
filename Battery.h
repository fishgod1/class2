#ifndef BATTERY_H
#define BATTERY_H

#include <iostream>
#include <fstream>

class Battery {
private:
    std::string model;

public:
    Battery();
    void setModel(const std::string &m);
    void print() const;
    void save(std::ofstream &outFile) const;
};

#endif // BATTERY_H
