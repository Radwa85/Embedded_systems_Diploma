#include <stdio.h>
struct student {
  char name[20] ;
  int roll;
  float marks;
};
int main() {
struct student s;
printf("Enter information of student:\n");
printf("Enter name:");
scanf("%s",s.name);
printf("Enter roll number:");
scanf("%d",&s.roll);
printf("Enter marks:");
scanf("%f",&s.marks);
printf("Displaying information\n");
printf("name:%s\n",s.name);
printf("Roll:%d\n",s.roll);
printf("marks:%.2f\n",s.marks);
return 0;
}

