#include "Lidar.h"

Lidar::Lidar() {}

void Lidar::setModel(const std::string &m) {
    model = m;
}

void Lidar::print() const {
    std::cout << "激光雷达型号: " << model << std::endl;
}

void Lidar::save(std::ofstream &outFile) const {
    outFile << "激光雷达型号: " << model << "\n";
}
