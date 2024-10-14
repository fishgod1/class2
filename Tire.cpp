#include "Tire.h"

Tire::Tire() {}

void Tire::setID(const std::string &tireID) {
    id = tireID;
}

void Tire::setModel(const std::string &m) {
    model = m;
}

void Tire::print() const {
    std::cout << "轮胎编号: " << id << ", 型号: " << model << std::endl;
}

void Tire::save(std::ofstream &outFile) const {
    outFile << "轮胎编号: " << id << ", 型号: " << model << "\n";
}
