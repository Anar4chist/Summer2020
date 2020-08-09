#include <stdio.h>
#include <stdlib.h>
#include <math.h>
             


int main (){
    int *a,*b,*c;;
    int i,j,n,z,l,k,li;
  
   
    a=(int *)malloc(n*k*sizeof(int));  
b =(int *)malloc(k*sizeof(int));  
printf("\nVvedit k-st mist ");
k=6; 
printf("\nVvedit k-st kandydativ ");
n=5;
printf("\nVvedit reityng n ");
scanf("%d ",&z);
printf("\nNas/pynkt       Kandudat");
printf("\n          a  b  c  d  e ");
for(i=1; i<=k; i++){
printf("\n   N%d     ",i);
for (j=1; j<=n; j++){
*(a + j*n + i)=rand()% 1*24 + 50;
printf("%d ", *(a + j*n + i));
}}

int sum=0;
int p=0;
for (j=1; j<=n; j++)
{
sum=0;
for(i=1; i<=k; i++)
sum=*(a + j*n + i)+sum;
printf("\nsum %d ",sum);

if(sum>=z)
p++;
}


printf("\n%d kandydativ nabralo bilshe n gokosiv ",p);

if (a== NULL){{
printf("Error");
return -1;
}}



free(a);
return 0;
}






