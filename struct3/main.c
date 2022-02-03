#include <stdio.h>
#include <stdlib.h>

//#include <studio.h>
#define SIZE 10

void bubble(int work[],size_t size, int *compare(int a,int b));
int ascending(int a ,int b);
int descending(int a,int b);
void swap (int *element1Ptr,int *element2Prt);
int main()
{

    int sirala;
    size_t counter;
    int a[SIZE]={2,6,8,4,10,28,5,89,24};
    printf("%s","enter 1 to sort ascendşng 0 to descending \n"  );
    scanf("%d",&sirala);
    puts("\n data items original order");

    for(counter=0;counter<SIZE;counter ++)
    {
          printf("%5d",a[counter]);
    }


    if(sirala==1)
    {
          bubble(a,SIZE,ascending);
          puts("\n dizi artan sırada");
    }

    else
    {
          bubble(a,SIZE,descending);
           puts("\n dizi azalan sırada");
    }

  for(counter=0;counter<SIZE;counter ++)
    {
          printf("%5d",a[counter]);
    }
    puts("\n");


}

void bubble(int work[],size_t size, int *(compare)(int a,int b))

{
  unsigned int pass;
  size_t count;
  void swap (int *element1Ptr,int *element2Prt);
  for(pass=1;pass<size;pass++)
  {
        for(count=0;count<size-1;count++)
        {
              if(*(compare)(work[count],work[count+1]))
                  swap(&work[count],&work[count+1]);
        }
  }
}
  void swap(int *element1Ptr,int *element2Prt)
  {
        int hold;
        hold=*element1Ptr;
        *element1Ptr=*element2Prt;
        element2Prt=hold;
  }

  int ascending(int a,int b)
  {
        return b < a;
  }

   int descending(int a,int b)
  {
        return b > a;
  }


/*

#include <stdio.h>
#define  STUDENTS 3
#define EXAMS 3

void printArray(const int grades[][EXAMS],int pupils,int tests);
void minimum(const int grades[][EXAMS],int pupils,int tests);
void maximum(const int grades[][EXAMS],int pupils,int tests);
void average(const int grades[][EXAMS],int pupils,int tests);

int main(void)
{
int examGrades[STUDENTS][EXAMS];
int choice;
int i,j;
void (*gradeProcess[4])(int)={printArray,minimum,maximum,average};

for(i=0;i<STUDENTS;i++){
    printf("Enter the grades of student %d:\n",i);
    for(j=0;j<EXAMS;j++){
        scanf("%d",&examGrades[i][j]);
    }
}

printf("\n\n0 to print array\n1 to find the lowest grade\n2 to find the highest grade\n3 to find average for each student\n4 to end program\n\n");

printf("Enter the number of operation you want to process:");
scanf("%d",&choice);

while(choice>=0 && choice<4){
    (*gradeProcess[choice])(choice);

    printf("Enter the number of operation you want to process:");
    scanf("%d",&choice);
}

printf("\n\nProgram execution completed\n");

system("PAUSE");
return (0);
}

void printArray(const int grades[][EXAMS],int pupils,int tests)
{
printf("You chose to print array\n\n");
printf("            [0]  [1]  [2]");

for(pupils=0;pupils<STUDENTS;pupils++){
    printf("\nstudent[%d]= ",pupils);
    for(tests=0;tests<EXAMS;tests++){
        printf("%4d",grades[pupils][tests]);
    }
}
}

void minimum(const int grades[][EXAMS],int pupils,int tests)
{
int lowest=0;

printf("The lowest grade will be displayed");

for(pupils=0;pupils<STUDENTS;pupils++){
    for(tests=0;tests<EXAMS;tests++){
        if(lowest>grades[pupils][tests]){
            lowest=grades[pupils][tests];
        }
    }
}

printf("\nThe lowest grade is %d",lowest);
}

void maximum(const int grades[][EXAMS],int pupils,int tests)
{
int highest=0;

printf("The highest grade will be displayed");

for(pupils=0;pupils<STUDENTS;pupils++){
    for(tests=0;tests<EXAMS;tests++){
        if(highest>grades[pupils][tests]){
            highest=grades[pupils][tests];
        }
    }
}

printf("\nThe highest grade is %d",highest);
}

void average(const int grades[][EXAMS],int pupils,int tests)
{
int total;
double average;

printf("You chose to display average of each student\n\n");

for(pupils=0;pupils<STUDENTS;pupils++){
    printf("The average for student[%d]:",pupils);
    for(tests=0;tests<EXAMS;tests++){
        total+=grades[pupils][tests];
    }
    average=(double)total/tests;
    printf("%.2lf",average);
}
}
*/
