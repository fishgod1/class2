#ifndef LCD_H
#define LCD_H

#include <iostream>
#include <fstream>

class LCD {
private:
    std::string model;

public:
    LCD();
    void setModel(const std::string &m);
    void print() const;
    void save(std::ofstream &outFile) const;
};

#endif // LCD_H
