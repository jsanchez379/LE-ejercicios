#include <stdio.h>

int main()
{
 int matriz[3][2];
 int i,j;
 
 for(i=0;i<3;i++){
     for(j=0;j<2;j++){
         printf("\ningrese el valor de la matriz\n");
         scanf("%d",&matriz[i][j]);
     }
 }
 for(i=0;i<3;i++){
     for(j=0;j<2;j++){
         printf("%d\t",matriz[i][j]);
}
printf("\n");
}
return 0;
}
