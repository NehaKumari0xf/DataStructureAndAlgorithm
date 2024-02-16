#include<stdio.h>
#define SIZE 10
#include<stdlib.h>

struct Student
{
    char sname[30];
    char fname[30];
    char class[3];
    char gender[10];
    int roll;   
};

struct Teacher
{
    char tname[30];
    char fname[30];
    char subject[10];
    int salary;
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
    return student;

}
  void viewStudent(struct Student student)
  {
    printf("\n%30s  %30s  %10s  %10s  %5d",student.sname,student.fname,student.gender,student.class,student.roll);

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
    return teacher;
  }

  void viewTeacher(struct Teacher teacher)
  {
    printf("\n%30s %30s %10s  %5d",teacher.tname,teacher.fname,teacher.subject,teacher.salary);
  }

  int main()
  {
    struct Teacher tacherlist[SIZE];
    int ttotal=0;
    struct Student studentlist[SIZE];
    int stotal=0;
    int choice,i;
    do
    {
        printf("\nRECORDS OF STUDENTS AND TEACHERS.\n===============================================");
        printf("\n1. Add New Teacher Record. \n2. Add New Students Record  \n3. View Teachers Records.\n4. View Teachers Records\n5.Exit");
        printf("\nEnter Your choice:- ");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1: 
            // code for add new teacher
           
            if(SIZE==ttotal)
            {
                printf("List is full.");
                break;
            }
            tacherlist[ttotal]=inputTeacher();
            ttotal++;
            printf("\nNew Teacher added successfully...");
            break;

            case 2: //code for add new student 
            if(SIZE==stotal)
            {
                printf("List is full.");
                break;
            }
            studentlist[stotal]=inputStudent();
            stotal++;
            printf("\nNew Student added successfully...");
            break;
            
            case 3: 
            // code for view  Teachers
            if (ttotal==0)
            {
                /* code */
                printf("\nList is empty");
                break;
            }
            printf("\n Teacher Record");
            printf("\n====================================================\n");
            printf("\n%30s %30s %10s %7s","Name","Father's Name","Subject","Salary");
            printf("\n-----------------------------------------------------------------------------------\n");
            for ( i = 0; i < ttotal; i++)
            {
                /* code */
                viewTeacher(tacherlist[i]);
            }
            printf("\n-----------------------------------X-----------------------------------");

        
            break;
            case 4://view Student
            if (stotal==0)
            {
                /* code */
                printf("\nList is empty");
                break;
            }
            printf("\n Student Record");
            printf("\n====================================================\n");
            printf("\n%30s %30s %10s %8s %10s","Name","Father's Name","Gender","Class","Roll_No.");
            printf("\n-----------------------------------------------------------------------------------\n");
            for ( i = 0; i < stotal; i++)
            {
                /* code */
                viewStudent(studentlist[i]);
            }
            
            printf("\n-----------------------------------X-----------------------------------");
            break;
            case 5:
            return 0;
            default:
            printf("UH-OH!! you have entered an invalid choice.");
        }
        printf("\n");
        system("pause");
    } while (1);
    
  }