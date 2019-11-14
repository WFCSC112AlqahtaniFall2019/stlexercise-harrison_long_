//
// Created by Ethan Harrison on 11/14/19.
//
#include <iostream>
#include <fstream>
#include <vector>
#include "Student.h"
#include "Student.h"

void Student::getName() {
    ifstream inFile;
    inFile.open("../Students");

    if (!inFile.is_open()) {
        cout << "File not open!" << endl;
    }
    while (!inFile.eof()) {
        getline(inFile, firstName, ',');
        //cout << firstName << ", ";
        getline(inFile, lastName);
        //cout << lastName << endl;
    }
}

void Student::setInitial() {
    firstName = firstName[0];
    lastName = lastName[0];
}