#include<stdio.h>
#include<stdlib.h>

struct Student
{
    char sname[30];
    char fname[30];
    char class[3];
    char gender[10];
    int roll;
    struct Student *next;
};

struct Teacher
{
    char tname[30];
    char fname[30];
    char subject[10];
    int salary;
    struct Teacher *next;
};

struct Student inputStudent()
{
    struct Student student;
    printf("\nEnter Student Details:-\n");
    printf("Enter Name:- ") ;
    fflush(stdin);
    gets(student.sname);
    printf("Enter Father's name:- ");
    gets(student.fname);
    printf("Enter Class:- ");
    gets(student.class);
    printf("Enter Gender:- ");
    gets(student.gender);
    printf("Enter Roll_no:- ");
    scanf("%d",&student.roll);
    student.next=NULL;
    return student;

}
  void viewStudent(struct Student student)
  {
    printf("\n%30s  %30s  %10s  %10s  %d",student.sname,student.fname,student.gender,student.class,student.roll);

  }
  struct Teacher inputTeacher()
  {
    struct Teacher teacher;
    printf("\nEnter details of Teacher:-\n");
    printf("Enter Name:- ");
    fflush(stdin);
    gets(teacher.tname);
    printf("Enter Father's name:- ");
    gets(teacher.fname);
    printf("Enter Subject:- ");
    gets(teacher.subject);
    printf("Enter Salary:- ");
    scanf("%d",&teacher.salary);
    teacher.next=NULL;
    return teacher;
  }

  void viewTeacher(struct Teacher teacher)
  {
    printf("\n%30s %30s %10s  %d",teacher.tname,teacher.fname,teacher.subject,teacher.salary);
  }

  int main()
  {
    struct Teacher *teacherList=NULL,*newTeacher,*tempTeacher;
    struct Student *studentList=NULL,*newStudent,*tempStudent;
    int choice;
    do
    {
        printf("\nRECORDS OF STUDENTS AND TEACHERS.\n===============================================");
        printf("\n1. Add New Teacher Record. \n2. View Teachers Records. \n3. Add New Students Record \n4. View Teachers Records\n5.Exit");
        printf("\nEnter Your choice:- ");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1: 
            // code for add new teacher
            newTeacher=(struct Teacher*)malloc(sizeof(struct Teacher));
            if(!newTeacher)
            {
                printf("UH-OH!! Unable to allocate for New Teacher");
                break;
            }
            *newTeacher=inputTeacher();
            if(!teacherList)
            {
                teacherList=newTeacher;
                newTeacher=NULL;
                printf("\nNew Teacher added successfully...");
                break;
            }
            // find the adddress of last node of teacher list
            tempTeacher=teacherList;
            while (tempTeacher->next)
            {
                tempTeacher=tempTeacher->next;

            }
            tempTeacher->next=newTeacher;
            newTeacher=NULL;
            printf("\nNew Teacher added successfully...");
            
            break;

            case 2: //view Teacher
            if(!teacherList)
            {
                printf("\nThe Teacher list is empty.");
                break;
            }
            printf("\nTeachers Record:\n");
            printf("\n====================================================\n");
            tempTeacher=teacherList;
            while (tempTeacher)
            {
                viewTeacher(*tempTeacher);
                tempTeacher=tempTeacher->next;
            }
            printf("\n-----------------------------------X-----------------------------------");
            break;
            
            case 3: 
            // code for add new Student
            newStudent=(struct Student*)malloc(sizeof(struct Student));
            if(!newStudent)
            {
                printf("UH-OH!! Unable to allocate for New Student");
                break;
            }
            *newStudent=inputStudent();
            if(!studentList)
            {
                studentList=newStudent;
                newStudent=NULL;
                printf("\nNew Student added successfully...");
                break;
            }
            // find the adddress of last node of teacher list
            tempStudent=studentList;
            while (tempStudent->next)
            {
                tempStudent=tempStudent->next;

            }
            tempStudent->next=newStudent;
            newStudent=NULL;
            printf("\nNew Student added successfully...");
            
            break;
            case 4://view Student
            if(!studentList)
            {
                printf("\nThe Student list is empty.");
                break;
            }
            printf("\nStudent Record:\n");
            printf("\n====================================================\n");
            tempStudent=studentList;
            while (tempStudent)
            {
                viewStudent(*tempStudent);
                tempStudent=tempStudent->next;
            }
            printf("\n-----------------------------------X-----------------------------------");
            break;
            case 5:
            return 0;
            default:
            printf("UH-OH!! you have intered an invalid choice.");
        }
    } while (1);
    
  }