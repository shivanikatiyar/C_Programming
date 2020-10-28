#include<stdio.h>
int main()
{
  FILE *fptr;
  char name[20];
  int age;
  float salary;

  fptr =fopen("employee.txt","a");
  printf("Enter the name\n");
  scanf("%s",&name);

  fprintf(fptr,"Name : %s\n",name);   // help of fprintf() directed written in file.
  printf("Enter the age\n");

  scanf("%d",&age);
  fprintf(fptr,"Age  :%d\n",age);

  printf("Enter the salary\n");
  scanf("%f",&salary);

  fprintf(fptr,"Salary  :%.2f\n",salary);
  fprintf(fptr,"\n");
  fclose(fptr);
  return 0;
}
