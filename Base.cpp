#include "Base.hpp"
#include <iostream>
#include <algorithm>


void Base::AddNewStudent(Student student){
    StudentBase.push_back(student);
}

void Base::AddNewEmployee(Employee employee){
    EmployeeBase.push_back(employee);
}
void Base::SortByIndex(){
    sort(StudentBase.begin(), StudentBase.end(),
            [] (const Student& s1, const Student& s2) {return s1.index_nr < s2.index_nr;}
        );

}

void Base::DisplayBase(){
    for(Student s:StudentBase)
    {
        std::cout << "Name: " << s.name << " Surname: " << s.surname << " Index nr " << s.index_nr << " Average: " << s.average_grade << std::endl;
    }
    for(Employee e:EmployeeBase)
    {
         std::cout << "Name: " << e.name << " Surname: " << e.surname << " Salary: " << e.salary << std::endl;
    }
}
