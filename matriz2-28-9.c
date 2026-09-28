#include <stdio.h>

int main()
{
 int matriz[3][2][2];
 int i,j,h;
 
 for(i=0;i<3;i++){
     for(j=0;j<2;j++){
         for(h=0;h<2;h++){
         printf("\ningrese el valor de la matriz\n");
         scanf("%d",&matriz[i][j][h]);
     }
 }
 }
 for(i=0;i<3;i++){
     printf("\nbloque %d:\n",i + 1);
     for(j=0;j<2;j++){
         for(h=0;h<2;h++){
         printf("%d\t",matriz[i][j][h]);
}
printf("\n");
}
}
return 0;
}
