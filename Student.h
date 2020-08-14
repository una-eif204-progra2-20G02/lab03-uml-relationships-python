//
// Created by diana on 12/8/2020.
//

#ifndef BASIC_00_EXAMPLE_STUDENT_H
#define BASIC_00_EXAMPLE_STUDENT_H
#include<iostream>
#include<sstream>
using namespace std;
#include"Person.h"
class Student : public Person
{
private:
    string carnet;

public:
    Student();
    Student(string& name, string& id, string carnet);
    void setCarnet(string carnet);
    string getCarnet();
    string toString() override;

};



#endif //BASIC_00_EXAMPLE_STUDENT_H
