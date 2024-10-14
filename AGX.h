#ifndef AGX_H
#define AGX_H

#include <iostream>
#include <fstream>

class AGX {
private:
    std::string model;

public:
    AGX();
    void setModel(const std::string &m);
    void print() const;
    void save(std::ofstream &outFile) const;
};

#endif // AGX_H
