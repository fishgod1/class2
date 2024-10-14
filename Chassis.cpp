#include "Chassis.h"

Chassis::Chassis() {}

void Chassis::setID(const std::string &carID) {
    id = carID;
}

void Chassis::setModel(const std::string &m) {
    model = m;
}

void Chassis::print() const {
    std::cout << "底盘编号: " << id << ", 型号: " << model << std::endl;
}

void Chassis::save(std::ofstream &outFile) const {
    outFile << "底盘编号: " << id << ", 型号: " << model << "\n";
}
