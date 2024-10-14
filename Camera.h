#ifndef CAMERA_H
#define CAMERA_H

#include <iostream>
#include <fstream>

class Camera {
private:
    std::string model;

public:
    Camera();
    void setModel(const std::string &m);
    void print() const;
    void save(std::ofstream &outFile) const;
};

#endif // CAMERA_H
