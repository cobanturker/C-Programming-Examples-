#include <stdio.h>
#include <stdlib.h>

void swap(int *xp,int *yp)

{
      int temp=*xp;
      *xp=*yp;
      *yp=temp;


}

void bubbleSort(int arr[],int n)
{
      int i,j;
      for(i=0;i<n-1;i++)
      {
            for(j=0;j<n-1;j++)
            {
                  if(arr[j]>arr[j+1])

                        swap(&arr[j],&arr[j+1]);
      }


}

}

void printArray(int arr[],int size)

{
      int i=0;
      for(i;i<size;i++)
      {
            printf("%d",arr[i]);
            printf("\n");
      }

}


int main()
{

      int arr[]={65,56,7,85,4,89};

      int n=sizeof(arr)/sizeof(arr[0]);

      bubbleSort(arr,n);

      printf("sorted array is \n");
      printArray(arr,n);


    return 0;
}
