#pragma once

#include "Student.hpp"
#include "Employee.hpp"

#include <iostream>
#include <vector>

class Base{
    std::vector<Student> StudentBase;
    std::vector<Employee> EmployeeBase;
    public:
    void ExportToFile();
    void ImportFromFile();
    void DeleteRecord();
    void AddNewStudent(Student);
    void DisplayBase();
    void AddNewEmployee(Employee);
    Base(){};
    ~Base() = default;
    void SortByIndex();
    void SortByName();
};
