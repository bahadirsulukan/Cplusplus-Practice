#include "Student.h"
#include <sstream>

Student::Student() : name(""), id(0), grade(0.0) {}

Student::Student(std::string n, int i, double g) : name(n), id(i), grade(g) {}

void Student::display() const {
    std::cout << "ID: " << id << " | Name: " << name << " | Grade: " << grade << std::endl;
}

std::string Student::serialize() const {
    return std::to_string(id) + "," + name + "," + std::to_string(grade);
}

Student Student::deserialize(const std::string& line) {
    std::stringstream ss(line);
    std::string idStr, nameStr, gradeStr;

    getline(ss, idStr, ',');
    getline(ss, nameStr, ',');
    getline(ss, gradeStr, ',');

    int id = std::stoi(idStr);
    double grade = std::stod(gradeStr);

    return Student(nameStr, id, grade);
}