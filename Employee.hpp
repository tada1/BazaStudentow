#pragma once
#include<string>
#include<iostream>

struct Employee{
    public:
    std::string name, surname;
    float salary;

    Employee(std::string n, std::string s, float a){
        name = n;
        surname = s;
        salary = a;
    };
    ~Employee(){};

};

