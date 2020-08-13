//
// Created by fabiana on 12/08/2020.
//

#ifndef BASIC_00_EXAMPLE_COURSE_H
#define BASIC_00_EXAMPLE_COURSE_H

#include<iostream>
#include<sstream>
using namespace std;

class Course{
private:
    string nrc;

public:
    Course();
    Course(const string& nrc);
    void setNrc(string& nrc);
    string getNrc();
    string toString();
    ~Course();
};
#endif //BASIC_00_EXAMPLE_COURSE_H