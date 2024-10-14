#include <iostream>
#include <fstream>
#include <vector>
#include "SmartCar.h"

int main() {
    std::vector<SmartCar> cars(10);
    std::ofstream outFile("cars_data.txt");
    std::string carID;

    for (int i = 0; i < 10; ++i) {
        std::cout << "请输入第 " << (i + 1) << " 台智能小车的编号: ";
        std::cin >> carID;
        cars[i].setID(carID);

        Chassis chassis;
        std::string chassisID, chassisModel;
        std::cout << "请输入底盘编号: ";
        std::cin >> chassisID;
        chassis.setID(chassisID);
        std::cout << "请输入底盘型号: ";
        std::cin >> chassisModel;
        chassis.setModel(chassisModel);
        cars[i].setChassis(chassis);

        Tire tire;
        std::string tireID, tireModel;
        std::cout << "请输入轮胎编号: ";
        std::cin >> tireID;
        tire.setID(tireID);
        std::cout << "请输入轮胎型号: ";
        std::cin >> tireModel;
        tire.setModel(tireModel);
        cars[i].setTire(tire);

        AGX agx;
        std::string agxModel;
        std::cout << "请输入AGX型号: ";
        std::cin >> agxModel;
        agx.setModel(agxModel);
        cars[i].setAGX(agx);

        Camera camera;
        std::string cameraModel;
        std::cout << "请输入摄像头型号: ";
        std::cin >> cameraModel;
        camera.setModel(cameraModel);
        cars[i].setCamera(camera);

        Gyro gyro;
        std::string gyroModel;
        std::cout << "请输入陀螺仪型号: ";
        std::cin >> gyroModel;
        gyro.setModel(gyroModel);
        cars[i].setGyro(gyro);

        Lidar lidar;
        std::string lidarModel;
        std::cout << "请输入激光雷达型号: ";
        std::cin >> lidarModel;
        lidar.setModel(lidarModel);
        cars[i].setLidar(lidar);

        LCD lcd;
        std::string lcdModel;
        std::cout << "请输入液晶显示屏型号: ";
        std::cin >> lcdModel;
        lcd.setModel(lcdModel);
        cars[i].setLCD(lcd);

        Battery battery;
        std::string batteryModel;
        std::cout << "请输入电池型号: ";
        std::cin >> batteryModel;
        battery.setModel(batteryModel);
        cars[i].setBattery(battery);

        Student student;
        std::string studentID, studentName;
        std::cout << "请输入学生学号: ";
        std::cin >> studentID;
        student.setID(studentID);
        std::cout << "请输入学生姓名: ";
        std::cin >> studentName;
        student.setName(studentName);
        cars[i].setAssignedStudent(student);

        std::cout << "第 " << (i + 1) << " 台智能小车的信息如下:" << std::endl;
        cars[i].print();

        cars[i].save(outFile);
    }

    outFile.close();
    return 0;
}
