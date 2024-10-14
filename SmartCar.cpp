#include "SmartCar.h"

SmartCar::SmartCar() {}

void SmartCar::setID(const std::string &carID) {
    id = carID;
}

void SmartCar::setChassis(const Chassis &c) {
    chassis = c;
}

void SmartCar::setTire(const Tire &t) {
    tire = t;
}

void SmartCar::setAGX(const AGX &a) {
    agx = a;
}

void SmartCar::setCamera(const Camera &cam) {
    camera = cam;
}

void SmartCar::setGyro(const Gyro &g) {
    gyro = g;
}

void SmartCar::setLidar(const Lidar &l) {
    lidar = l;
}

void SmartCar::setLCD(const LCD &lcd) {
    this->lcd = lcd;
}

void SmartCar::setBattery(const Battery &b) {
    battery = b;
}

void SmartCar::setAssignedStudent(const Student &s) {
    assignedStudent = s;
}

void SmartCar::print() const {
    std::cout << "智能小车编号: " << id << std::endl;
    chassis.print();
    tire.print();
    agx.print();
    camera.print();
    gyro.print();
    lidar.print();
    lcd.print();
    battery.print();
    assignedStudent.print();
}

void SmartCar::save(std::ofstream &outFile) const {
    outFile << "智能小车编号: " << id << "\n";
    chassis.save(outFile);
    tire.save(outFile);
    agx.save(outFile);
    camera.save(outFile);
    gyro.save(outFile);
    lidar.save(outFile);
    lcd.save(outFile);
    battery.save(outFile);
    assignedStudent.save(outFile);
}
