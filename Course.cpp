//
// Created by fabiana on 12/08/2020.
//

#include "Course.h"

Course::Course(){
    this->ncr = "";
}
Course::Course(string nrc){
    this->ncr =nrc;
}

void Course::setNrc(string nrc) {
    this->nrc = nrc;
}

string Course::getNrc(){
    return nrc;
}

string Course::toString()	{
    stringstream s;
    s << "NRC: " << nrc << endl;
    return s.str();
}