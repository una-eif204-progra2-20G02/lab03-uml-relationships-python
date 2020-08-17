//
// Created by mafef on 16/08/2020.
//

#include "Career.h"

Career::Career() {
    this->name = " ";
}

Career::Career(const string &name) {
    this->name = name;
}

Career::Career(const string &name, Course &course, Professor &professor, vector<Course> &courseList,
               vector<Professor> &professorList) {
    this->name = name;
    this->course = course;
    this->professor = professor;
    this->courseList = courseList;
    this->professorList = professorList;
}

string Career::getName() {
    return name;
}

void Career::setName(const string &name) {
    this->name = name;
}

Course Career::getCourse() {
    return course;
}

void Career::setCourse(Course &course) {
    this->course = course;
}

Professor Career::getProfessor() {
    return professor;
}

void Career::setProfessor(Professor &professor) {
    this->professor = professor;
}

void Career::addCourse(Course course) {
    courseList.push_back(course);
}

string Career::getListCourse() {
    stringstream s;
    int i = 0;
    while (i < courseList.size()) {
        s << courseList.at(i).toString();
        i++;
    }
    return s.str();
}

void Career::addProfessor(Professor professor) {
    professorList.push_back(professor);
}

string Career::getListProfessor() {
    stringstream s;
    int i = 0;
    while (i < professorList.size()) {
        s << professorList.at(i).toString();/
        i++;
    }
    return s.str();
}

string Career::toString() {
    stringstream s;
    s << "Career: " << name << endl;
    return s.str();
}

Career::~Career() {
    
}
