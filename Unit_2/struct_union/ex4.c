#include <stdio.h>

struct student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct student students[10];
    int i;

    printf("Enter information of students:\n");
    for (i = 0; i < 10; ++i) {
        students[i].roll = i + 1;
        printf("\nFor roll number %d\n", students[i].roll);
        printf("Enter name: ");
        scanf("%s", students[i].name);
        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
        printf("\n");
    }

    printf("Displaying information of students:\n\n");
    for (i = 0; i < 10; ++i) {
        printf("\nInformation for roll number %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.1f\n", students[i].marks);
    }

    return 0;
}


