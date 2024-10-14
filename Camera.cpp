#include "Camera.h"

Camera::Camera() {}

void Camera::setModel(const std::string &m) {
    model = m;
}

void Camera::print() const {
    std::cout << "摄像头型号: " << model << std::endl;
}

void Camera::save(std::ofstream &outFile) const {
    outFile << "摄像头型号: " << model << "\n";
}
