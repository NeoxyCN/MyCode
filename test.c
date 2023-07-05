#include <stdio.h>

int main()

{

  int a[2][3]={{1,2,3},{4,5,6}};

  int i,j;

  printf("array a:\n");

  for (i=0;i<=1;i++)

    { for (j=0;j<=2;j++)

         printf("%5d",a[i][j]);  

       printf("\n");

     }

    return 0;

  }   

