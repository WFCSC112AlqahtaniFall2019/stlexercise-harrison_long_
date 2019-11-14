//
// Created by Ethan Harrison on 11/14/19.
//

#ifndef STL_EXERCISE_STUDENT_H
#define STL_EXERCISE_STUDENT_H
#include <string>
using namespace std;


class Student {
public:
    void getName();
    void setInitial();
private:
    string firstName;
    string lastName;
};


#endif //STL_EXERCISE_STUDENT_H
