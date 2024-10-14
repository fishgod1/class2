#ifndef SMARTCAR_H
#define SMARTCAR_H

#include <iostream>
#include <fstream>
#include <string>
#include "Chassis.h"
#include "Tire.h"
#include "AGX.h"
#include "Camera.h"
#include "Gyro.h"
#include "Lidar.h"
#include "LCD.h"
#include "Battery.h"
#include "Student.h"

class SmartCar {
private:
    std::string id;
    Chassis chassis;
    Tire tire;
    AGX agx;
    Camera camera;
    Gyro gyro;
    Lidar lidar;
    LCD lcd;
    Battery battery;
    Student assignedStudent;

public:
    SmartCar();
    void setID(const std::string &carID);
    void setChassis(const Chassis &c);
    void setTire(const Tire &t);
    void setAGX(const AGX &a);
    void setCamera(const Camera &cam);
    void setGyro(const Gyro &g);
    void setLidar(const Lidar &l);
    void setLCD(const LCD &lcd);
    void setBattery(const Battery &b);
    void setAssignedStudent(const Student &s);
    void print() const;
    void save(std::ofstream &outFile) const;
};

#endif // SMARTCAR_H
