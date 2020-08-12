//
// Created by fabiana on 12/08/2020.
//

#ifndef BASIC_00_EXAMPLE_COURSE_H
#define BASIC_00_EXAMPLE_COURSE_H
class Course{
    private:
        string nrc;

    public:
        Course();
        Course(string nrc);
        void setNrc(string);
        string getNrc();
        string toString();
        ~Curso();
};
#endif //BASIC_00_EXAMPLE_COURSE_H
