#include <stdio.h>
#include <string.h>

// Define a structure to hold student details
struct Student {
    char name[50];
    int age;
    int rollNumber;
    float marks;
};

int main() {
    struct Student student; // Declare a student variable
    int choice;

    do {
        printf("\nStudent Management System\n");
        printf("1. Enter Student Details\n");
        printf("2. Display Student Details\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nEnter Student Name: ");
                scanf("%s", student.name); // Using %s for string input
                printf("Enter Student Age: ");
                scanf("%d", &student.age);
                printf("Enter Student Roll Number: ");
                scanf("%d", &student.rollNumber);
                printf("Enter Student Marks: ");
                scanf("%f", &student.marks);
                printf("Student details entered successfully!\n");
                break;
            case 2:
                printf("\n--- Student Details ---\n");
                printf("Name: %s\n", student.name);
                printf("Age: %d\n", student.age);
                printf("Roll Number: %d\n", student.rollNumber);
                printf("Marks: %.2f\n", student.marks);
                break;
            case 3:
                printf("Exiting program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 3);

    return 0;
}