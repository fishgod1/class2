打开vscode终端输入,将编码改为UTF-8:

chcp65001

编译：

g++ -o smart_car main.cpp SmartCar.cpp Chassis.cpp Tire.cpp AGX.cpp Camera.cpp Gyro.cpp Lidar.cpp LCD.cpp Battery.cpp Student.cpp  
执行后会生成smart_manager.exe

运行：

./smart_car
