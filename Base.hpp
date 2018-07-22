#pragma once

#include "Student.hpp"

#include <iostream>
#include <vector>

class Base{
    std::vector<Student> StudentBase;
    public:
    void ExportToFile();
    void ImportFromFile();
    void DeleteRecord();
    void AddNewStudent(Student);
    void DisplayBase();
    //void AddNewEmployee(std::string, std::string, float);
    Base(){};
    ~Base() = default;
    void SortByIndex();
    void SortByName();
};
