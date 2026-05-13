#include "student.h"
#include <iostream>

void Student::input() {
    std::cout << "Enter student name: ";
    std::getline(std::cin, name);

    int n;
    std::cout << "How many grades? ";
    std::cin >> n;
    std::cin.ignore();

    grades.clear();
    for (int i = 0; i < n; i++) {
        float g;
        std::cout << "Grade " << i + 1 << ": ";
        std::cin >> g;
        grades.push_back(g);
    }
}

void Student::calculateAverage() {
    float sum = 0;
    for (float g : grades) sum += g;
    average = grades.empty() ? 0 : sum / grades.size();
}

void Student::display() {
    std::cout << "\n--- Student Report ---\n";
    std::cout << "Name: " << name << "\n";
    std::cout << "Grades: ";
    for (float g : grades) std::cout << g << " ";
    std::cout << "\nAverage: " << average << "\n";
}