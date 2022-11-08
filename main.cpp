#include <iostream>
#include "Student.h"
#include "string"

using namespace std;

int main() {
    //setlocale(LC_ALL, "Russian");
    Student arraysStudents[2] = {
            Student("Tinkoff", "Oleg", "Ivanovich", "17.12.2001", "Moscow, Sobornaya 24, 5", "+79515183943", "IiVT", 1),
            Student("Ivanov", "Ivan", "Ivanovich", "12.09.2003", "Moscow, Alexandovka 24, 5", "+79515183943", "SBP",
                    2)};
    for (int i = 0; i < 2; i++) { // вывод списка студентов заданного факультета
        if (arraysStudents[i].getFaculty() == "IiVT") {
            arraysStudents[i].show(arraysStudents);
        }
    }
    //for (int i = 0; i < 2; i++) {
        //int birth = stoi(arraysStudents[i].getBirthday());

    //}

       /* if (arraysStudents[i].getBirthday() > "17.12.2001") {
            arraysStudents[i].show(arraysStudents);
        }
        for (int i = 0; i < 2; i++) {
        int birth = stoi(arraysStudents[i].getBirthday());
        if (birth > 2001) {

            arraysStudents[i].show(arraysStudents);
        }
*/
    }
