// В заглавния файл "person.h"
#ifndef PERSON_H
#define PERSON_H

#define NAME_LENGTH 20

struct Person
{
    char first_name[NAME_LENGTH];
    char middle_name[NAME_LENGTH];
    char last_name[NAME_LENGTH];
    int birth_year;
};

#endif // PERSON_H

// В заглавния файл "schoolclass.h"
#ifndef SCHOOLCLASS_H
#define SCHOOLCLASS_H

#include "person.h"

struct SchoolClass
{
    struct Person students[26];
    char parallel;
    int class_number;
    struct Person class_teacher;
};

#endif // SCHOOLCLASS_H

// В заглавния файл "schoolroom.h"
#ifndef SCHOOLROOM_H
#define SCHOOLROOM_H

#include "person.h"

struct SchoolRoom
{
    int room_number;
    struct Person occupants[50];
};

#endif // SCHOOLROOM_H

// Във файл "school.c"
#include "schoolclass.h"
#include "schoolroom.h"

struct School
{
    struct SchoolClass school_classes[20];
    struct SchoolRoom school_rooms[10];
};

int main()
{
    struct School school;

    // Инициализация и използване на структурата "School" тук...

    return 0;
}
