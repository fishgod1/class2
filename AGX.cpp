#include "AGX.h"

AGX::AGX() {}

void AGX::setModel(const std::string &m) {
    model = m;
}

void AGX::print() const {
    std::cout << "AGX型号: " << model << std::endl;
}

void AGX::save(std::ofstream &outFile) const {
    outFile << "AGX型号: " << model << "\n";
}
