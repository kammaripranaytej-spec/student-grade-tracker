#pragma once
#include <string>
#include <vector>

class Student {
private:
    std::string name;
    std::vector<float> grades;  // ← missing!
    float average;              // ← missing!

public:
    void input();
    void calculateAverage();
    void display();
};