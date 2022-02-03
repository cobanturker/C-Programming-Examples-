#include <stdio.h>
#include <stdlib.h>
#include <time.h>
char grade_letter(int num);
void menu (int student_number);

void menu (int student_number)
{
      printf("\n>>>>>>>>>>>>>>>>>>>>>>---<<<<<<<<<<<<<<<<<<\n");
	printf("Student  Calculator Menu \n",student_number);
	printf("1) Most Successful Student\n");
	printf("2) Most Unsuccessful Student\n");
	printf("3) Letter Grade Statistics\n");
	printf("4) Calculate Average\n");
	printf("5) Show all data\n");
	printf("\t\t\t Make Selection:");

}

int main()
{
      int menu_selection;
        int i;
        int least;
        int moststu_order=0;
        int mostunstu_order=0;
      int a=0,b=0,c=0,d=0,e=0;
      int grade;
      int sum;
      int line=0;
      int student_number;
      int gratest=0;
      int average=0;
      srand(40);
      printf("Enter student umber:");
      scanf("%d",&student_number);
      if(student_number<0&&student_number>50)
      {
            printf("number is not in range please enter  between 5 and 50\n");
            scanf("%d",&student_number);
      }

      for(i=0;i<student_number;i++)
      {

            grade=(rand()%100);

            sum+=grade;
            line ++;
            average=sum/student_number;
            int gratest=0;
            printf("%-3d",grade);
            if(line==12)
            {
                  printf("\n");
            }

            if(gratest<grade)
            {
                  gratest=grade;
                  moststu_order=line;
            }
            if(least>grade)
            {
                  least=grade;
                  mostunstu_order=line;
            }

            if(grade_letter(grade)=='A')
            {
                 a++;
            }
            else if(grade_letter(grade)=='A')
            {
                 b++;
            }
            else if(grade_letter(grade)=='A')
            {
                 c++;
            }
            else if(grade_letter(grade)=='A')
            {
                 d++;
            }
            else if(grade_letter(grade)=='A')
            {
                 e++;
            }

      }


     menu(student_number);
    scanf("%d",&menu_selection);

    while(menu_selection!=-1)
    {
          switch(menu_selection)
          {
                 case 1:printf("most successful student\n");
                  printf("%d\n",gratest);
                  printf("%d\n",moststu_order);
                  printf("unsuccessful Grade: %c\n",grade_letter(gratest));
                  menu_selection=-1;
                  menu(student_number);
                  scanf("%d",&menu_selection);
                  break;


            case 2:printf("most unsuccessful student\n");
                    printf("%d\n",least);
                    printf("%d\n",mostunstu_order);
                    printf("unsuccessful Grade: %c\n",grade_letter(least));
                    menu_selection=-1;
                    menu(student_number);
                    break;


      case 3:     printf("%d students   letter'A'\n",a);
                  printf("%d students  letter'B'\n",b);
                  printf("%d students letter 'C'\n",c);
			printf("%d students letter 'D'\n",d);
			printf("%d students  letter  'E'\n",e);
			menu_selection=-1;
                  menu(student_number);
			scanf("%d",&menu_selection);
			break;
      case 4:
                  printf("average grade %d stundet number%d",average ,student_number);
                  menu_selection=-1;
                  menu(student_number);
			scanf("%d",&menu_selection);
			break;

      default:printf("False Selection!!\n");
       menu_selection=-1;
      menu(student_number);
      scanf("%d",&menu_selection);
      break;
          }

    }

return 0;

}

char grade_letter(int num)

{
      if(num>=90 && num<=100)
      {
            return 'A';
      }
      if(num>=80&&num<90)
      {
            return 'B';
      }
      if(num>=70&&num<80)
      {
            return 'C';
      }
      if(num>=60&&num<70)
      {
            return 'D';
      }
      if(num>=50&&num<60)
      {
            return 'E';
      }
}
