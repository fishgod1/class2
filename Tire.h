#ifndef TIRE_H
#define TIRE_H

#include <iostream>
#include <fstream>

class Tire {
private:
    std::string id;
    std::string model;

public:
    Tire();
    void setID(const std::string &tireID);
    void setModel(const std::string &m);
    void print() const;
    void save(std::ofstream &outFile) const;
};

#endif // TIRE_H
