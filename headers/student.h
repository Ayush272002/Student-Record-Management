#ifndef STUDENT_H
#define STUDENT_H

typedef struct student
{
    int id;
    char firstName[20];
    char lastName[20];
    int age;
    char gender;
    float grades[5];
    float avgGrade;
} student_t;

typedef struct Node Node_t;

typedef struct Node
{
    student_t data;
    Node_t *next;
} Node_t;

typedef struct LinkedList
{
    Node_t *head;
} LinkedList_t;

// Function declarations
LinkedList_t *createLinkedList();
void freeLinkedList(LinkedList_t *list);
void addStudent(LinkedList_t *list, student_t newStudent);
void printStudent(LinkedList_t *list);
Node_t *findStudent(LinkedList_t *list, int id);
void deleteStudent(LinkedList_t *list, int id);

#endif
