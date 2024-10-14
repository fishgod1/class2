#include "Gyro.h"

Gyro::Gyro() {}

void Gyro::setModel(const std::string &m) {
    model = m;
}

void Gyro::print() const {
    std::cout << "陀螺仪型号: " << model << std::endl;
}

void Gyro::save(std::ofstream &outFile) const {
    outFile << "陀螺仪型号: " << model << "\n";
}
