#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[20];
    char branch[10];
    float marks;
};

void addStudent();
void displayStudent();
void updateStudent();
void deleteStudent();

int main() {
    int choice;

    while (1) {
        printf("\n====== STUDENT CRUD SYSTEM ======\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Update Student\n");
        printf("4. Delete Student\n");
        printf("5. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addStudent(); break;
            case 2: displayStudent(); break;
            case 3: updateStudent(); break;
            case 4: deleteStudent(); break;
            case 5: return 0;
            default: printf("Invalid choice!\n");
        }
    }
}

void addStudent() {
    FILE *fp = fopen("students.dat", "ab");
    struct Student s;

    printf("Enter roll: ");
    scanf("%d", &s.roll);

    printf("Enter name: ");
    scanf("%s", s.name);

    printf("Enter branch: ");
    scanf("%s", s.branch);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    fwrite(&s, sizeof(s), 1, fp);

    fclose(fp);
    printf("Student added successfully!\n");
}

void displayStudent() {
    FILE *fp = fopen("students.dat", "rb");
    struct Student s;

    if (!fp) {
        printf("No data found.\n");
        return;
    }

    printf("\n======= STUDENT RECORDS =======\n");

    while (fread(&s, sizeof(s), 1, fp)) {
        printf("Roll no: %d\n", s.roll);
        printf("Name: %s\n", s.name);
        printf("Branch: %s\n", s.branch);
        printf("Marks: %.2f\n", s.marks);
        printf("---------------------------\n");
    }

    fclose(fp);
}

void updateStudent() {
    FILE *fp = fopen("students.dat", "rb");
    FILE *temp = fopen("temp.dat", "wb");

    struct Student s;
    int roll, found = 0;

    printf("Enter roll to update: ");
    scanf("%d", &roll);

    while (fread(&s, sizeof(s), 1, fp)) {
        if (s.roll == roll) {
            found = 1;

            printf("Enter new name: ");
            scanf("%s", s.name);

            printf("Enter new branch: ");
            scanf("%s", s.branch);

            printf("Enter new marks: ");
            scanf("%f", &s.marks);
        }
        fwrite(&s, sizeof(s), 1, temp);
    }

    fclose(fp);
    fclose(temp);

    remove("students.dat");
    rename("temp.dat", "students.dat");

    if (found)
        printf("Record updated!\n");
    else
        printf("Record not found!\n");
}

void deleteStudent() {
    FILE *fp = fopen("students.dat", "rb");
    FILE *temp = fopen("temp.dat", "wb");

    struct Student s;
    int roll, found = 0;

    printf("Enter roll to delete: ");
    scanf("%d", &roll);

    while (fread(&s, sizeof(s), 1, fp)) {
        if (s.roll == roll) {
            found = 1;
            continue;   // Skip writing this record
        }
        fwrite(&s, sizeof(s), 1, temp);
    }

    fclose(fp);
    fclose(temp);

    remove("students.dat");
    rename("temp.dat", "students.dat");

    if (found)
        printf("Record deleted!\n");
    else
        printf("Record not found!\n");
}
