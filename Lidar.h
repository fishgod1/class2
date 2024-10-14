#ifndef LIDAR_H
#define LIDAR_H

#include <iostream>
#include <fstream>

class Lidar {
private:
    std::string model;

public:
    Lidar();
    void setModel(const std::string &m);
    void print() const;
    void save(std::ofstream &outFile) const;
};

#endif // LIDAR_H
