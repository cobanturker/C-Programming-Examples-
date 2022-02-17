#include <stdio.h>
#include <stdlib.h>

int main()
{

      int ar1[]={2,5,8,9,8,5,8,4,5,4,3,5,2,1,5,2};
      int lengthofar1=sizeof(ar1)/sizeof(ar1[0]);

      int k=-1;


      int freq[lengthofar1];

      for(int i=0;i<lengthofar1;i++)
      {      int count=1;

            for(int j=i+1;j<lengthofar1;j++)
            {
                  if(ar1[i]==ar1[j]);
                  {
                  count++;
                  freq[j]=k;
                  }


            }
            if(freq[i]!=k)
               freq[i]=count;





      }
       printf(" array items | frequency\n");
      for(int i=0;i<20;i++)
      {

            if(freq[i]!=k)
            {
                  printf("%d",ar1[i]);
                  printf("         |      ");
                  printf("%d\n",freq[i]);
            }

      }

    //printf("lengthofar1 :%d\n",lengthofar1);
    return 0;
}
