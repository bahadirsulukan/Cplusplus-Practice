#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <iostream>

class Student {
private:
    std::string name;
    int id;
    double grade;

public:
    // Constructors
    Student();
    Student(std::string n, int i, double g);

    // Member functions
    void display() const;
    std::string serialize() const;

    // Static helper
    static Student deserialize(const std::string& line);

    // Getters
    int getId() const { return id; }
    std::string getName() const { return name; }
    double getGrade() const { return grade; }
};

#endif // STUDENT_H