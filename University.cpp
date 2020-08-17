//
// Created by diana on 15/8/2020.
//

#include "University.h"

University::University() {
    name = "";
}

University::University(string name, vector<Professor> professorList, vector<Course> courseList, vector<Student> studentList) {
        this->name = name;
        this->professorList = professorList;
        this->courseList = courseList;
        this->studentList = studentList;

}

University::~University() {

}

void University::setName(string name) {
    this->name = name;
}

string University::getName() {
    return name;
}

string University::toString() {
    stringstream s;
    s << "University: " << name << endl;
    //s << "Available careers: " << Career::toString();
    return s.str();
}


string University::getStudentList() {
    stringstream s;
    int i = 0;
    while(i < studentList.size()) {
        s << studentList.at(i).toString();
        i++;
    }
    return s.str();
}

string University::getProfessorList() {
    stringstream s;
    int i = 0;
    while(i < professorList.size()) {
        s << professorList.at(i).toString();
        i++;
    }
    return s.str();
}

string University::getCourseList() {
    stringstream s;
    int i = 0;
    while(i < courseList.size()) {
        s << courseList.at(i).toString();
        i++;
    }
    return s.str();
}


void University::addProfessor(Professor professor){
    professorList.push_back(professor);
}
void University::addStudent(Student student){
    studentList.push_back(student);
}
void University::addCourse(Course course){
    courseList.push_back(course);

}