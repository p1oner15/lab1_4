//
// Created by romat on 10/24/2022.
//

#ifndef LAB1_4_STUDENT_H
#define LAB1_4_STUDENT_H

#include <iostream>
#include "string"
using namespace std;



class Student {
    string surname, name, lastname, birthday, adress, phoneNumber, faculty;
    int course;
public:
    Student(string Surname, string Name, string Lastname, string Birthday,
            string Adress, string PhoneNumber, string Faculty, int Course){
        surname = Surname;
        name = Name;
        lastname = Lastname;
        birthday = Birthday;
        adress = Adress;
        phoneNumber = PhoneNumber;
        faculty = Faculty;
        course = Course;
    }
    ~Student() = default;

public:
    void show(Student* str) {
        cout<< str->surname << ", " << str->name << ", " << str->lastname << ", "<< str->birthday << ", "<< str->adress <<", "<< str->phoneNumber <<", "<< str->faculty << ", "<< str->course << endl;
    }

    void setSurname(const string &surname) {
        Student::surname = surname;
    }

    void setName(const string &name) {
        Student::name = name;
    }

    void setLastname(const string &lastname) {
        Student::lastname = lastname;
    }

    void setBirthday(const string &birthday) {
        Student::birthday = birthday;
    }

    void setAdress(const string &adress) {
        Student::adress = adress;
    }

    void setPhoneNumber(const string &phoneNumber) {
        Student::phoneNumber = phoneNumber;
    }

    void setFaculty(const string &faculty) {
        Student::faculty = faculty;
    }

    void setCourse(int course) {
        Student::course = course;
    }

    const string &getSurname() const {
        return surname;
    }

    const string &getName() const {
        return name;
    }

    const string &getLastname() const {
        return lastname;
    }

    const string &getBirthday() const {

        return birthday;
    }

    const string &getAdress() const {
        return adress;
    }

    const string &getPhoneNumber() const {
        return phoneNumber;
    }

    const string &getFaculty() const {
        return faculty;
    }

    int getCourse() const {
        return course;
    }

};


#endif //LAB1_4_STUDENT_H
