//
// Created by diana on 14/8/2020.
//

#ifndef LAB03_UML_RELATIONSHIPS_PYTHON_UNIVERSITY_H
#define LAB03_UML_RELATIONSHIPS_PYTHON_UNIVERSITY_H
#include<sstream>
#include<iostream>
#include"Student.h"
#include"Professor.h"
#include"Course.h"
#include<vector>
using namespace std;

class University
{
private:
    string name;
    vector<Professor> professorList;
    vector<Student> studentList;
    vector<Course> courseList;

public:
    University();
    University(string name, vector<Professor> professorList, vector<Course> courseList, vector<Student> studentList);
    ~University();
    void setName(string name);
    string getName();
    string toString();
    void addProfessor(Professor professor);
    void addStudent(Student student);
    void addCourse(Course course);
    string getStudentList();
    string getProfessorList();
    string getCourseList();

};
#endif //LAB03_UML_RELATIONSHIPS_PYTHON_UNIVERSITY_H
