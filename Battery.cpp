#include "Battery.h"

Battery::Battery() {}

void Battery::setModel(const std::string &m) {
    model = m;
}

void Battery::print() const {
    std::cout << "电池型号: " << model << std::endl;
}

void Battery::save(std::ofstream &outFile) const {
    outFile << "电池型号: " << model << "\n";
}
