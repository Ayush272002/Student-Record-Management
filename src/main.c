#include <stdio.h>
#include <stdlib.h>
#include "../headers/student.h"

int main()
{
    LinkedList_t *list = createLinkedList();
    int choice;

    while (1)
    {
        printf("\n----- Student Record Management -----\n");
        printf("1. Add Student\n");
        printf("2. View All Students\n");
        printf("3. Search Student by ID\n");
        printf("4. Delete Student by ID\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            student_t s;
            printf("Enter ID : ");
            scanf("%d", &s.id);
            printf("Enter First Name: ");
            scanf("%s", s.firstName);
            printf("Enter Last Name: ");
            scanf("%s", s.lastName);
            printf("Enter Age: ");
            scanf("%d", &s.age);
            printf("Enter Gender (M/F): ");
            scanf(" %c", &s.gender);
            float sum = 0;
            printf("Enter grades for 5 subjects:\n");
            for (int i = 0; i < 5; i++)
            {
                printf("Grade %d: ", i + 1);
                scanf("%f", &s.grades[i]);
                sum += s.grades[i];
            }
            s.avgGrade = sum / 5.0;
            addStudent(list, s);
            printf("Student added successfully.\n");
        }
        else if (choice == 2)
        {
            printStudent(list);
        }
        else if (choice == 3)
        {
            int id;
            printf("Enter ID to search: ");
            scanf("%d", &id);
            Node_t *found = findStudent(list, id);
            if (found)
            {
                printf("Student Found: %s %s, Age: %d, Avg Grade: %.2f\n",
                       found->data.firstName, found->data.lastName,
                       found->data.age, found->data.avgGrade);
            }
            else
            {
                printf("Student not found.\n");
            }
        }
        else if (choice == 4)
        {
            int id;
            printf("Enter ID to delete: ");
            scanf("%d", &id);
            deleteStudent(list, id);
            printf("Student deleted if found.\n");
        }
        else if (choice == 5)
        {
            freeLinkedList(list);
            printf("Exiting...\n");
            break;
        }
        else
        {
            printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}
