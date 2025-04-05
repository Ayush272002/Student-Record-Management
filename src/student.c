#include <stdio.h>
#include <stdlib.h>
#include "../headers/student.h"

LinkedList_t *createLinkedList()
{
    LinkedList_t *list = (LinkedList_t *)malloc(sizeof(LinkedList_t));
    list->head = NULL;
    return list;
}

void freeLinkedList(LinkedList_t *list)
{
    Node_t *curr = list->head;
    while (curr != NULL)
    {
        Node_t *tmp = curr;
        curr = curr->next;
        free(tmp);
    }
    free(list);
}

void addStudent(LinkedList_t *list, student_t newStudent)
{
    Node_t *newNode = (Node_t *)malloc(sizeof(Node_t));
    newNode->data = newStudent;
    newNode->next = list->head;
    list->head = newNode;
}

void printStudent(LinkedList_t *list)
{
    Node_t *current = list->head;

    while (current != NULL)
    {
        printf("ID: %d, Name: %s %s, Age: %d, Gender: %c, Avg Grade: %.2f\n",
               current->data.id, current->data.firstName, current->data.lastName,
               current->data.age, current->data.gender, current->data.avgGrade);
        current = current->next;
    }
}

Node_t *findStudent(LinkedList_t *list, int id)
{
    Node_t *curr = list->head;
    while (curr != NULL)
    {
        if (curr->data.id == id)
            return curr;
        curr = curr->next;
    }
    return NULL;
}

void deleteStudent(LinkedList_t *list, int id)
{
    Node_t *curr = list->head;
    Node_t *prev = NULL;

    while (curr != NULL)
    {
        if (curr->data.id == id)
        {
            if (prev == NULL)
                list->head = curr->next;
            else
                prev->next = curr->next;

            free(curr);
            return;
        }

        prev = curr;
        curr = curr->next;
    }
}
