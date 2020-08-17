//
// Created by diana on 14/8/2020.
//

#ifndef LAB03_UML_RELATIONSHIPS_PYTHON_CAREER_H
#define LAB03_UML_RELATIONSHIPS_PYTHON_CAREER_H

#include "Course.h"
#include "Professor.h"

#include <vector>
#include <iostream>
#include <sstream>

using namespace std;

class Career {

private:

    string name;
    Course course;
    Professor professor;
    vector<Course> courseList;
    vector<Professor> professorList;

public:

    Career();
    explicit Career(const string &name);
    Career(const string &name, Course &course, Professor &professor,
           vector<Course> &courseList, vector<Professor> &professorList);

    string getName();
    void setName(const string &name);

    Course getCourse();
    void setCourse(Course &course);

    Professor getProfessor();
    void setProfessor(Professor &professor);

    void addCourse(Course);
    string getListCourse();

    void addProfessor(Professor);
    string getListProfessor();
    
    string toString();

    ~ Career();

};

#endif //LAB03_UML_RELATIONSHIPS_PYTHON_CAREER_H
