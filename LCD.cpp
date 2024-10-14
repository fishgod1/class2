#include "LCD.h"

LCD::LCD() {}

void LCD::setModel(const std::string &m) {
    model = m;
}

void LCD::print() const {
    std::cout << "液晶显示屏型号: " << model << std::endl;
}

void LCD::save(std::ofstream &outFile) const {
    outFile << "液晶显示屏型号: " << model << "\n";
}
