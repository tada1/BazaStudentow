#pragma once
#include<string>
#include<iostream>

struct Student{

    std::string name, surname;
    int index_nr;
    float average_grade;

    Student(std::string n, std::string s, int i, float a){
        name = n;
        surname = s;
        index_nr = i;
        average_grade = a;
    };
    ~Student(){};
};
