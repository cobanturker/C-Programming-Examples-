#include <stdio.h>
#include <stdlib.h>
int main()
{

    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("taban alanı %d\n",a*b);

    printf("yanal alanlar toplamı %d\n",2*a*b+2*c*b+2*a*c);
     printf("hacmi%d\n",a*b*c);
    return 0;
}
