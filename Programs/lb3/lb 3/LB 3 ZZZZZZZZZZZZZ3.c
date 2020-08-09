#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
int d[5][5],i,j,l,k;
int sum,min;

printf("   \nMasyv D(5,5):");
l=0;k=0;sum=0;
for (i=0;i<5;i++)
  {
  printf("\n");
for (j=0;j<5;j++)
{d[i][j]=rand()% 5 -2;
printf("%d ",d[i][j]);
}}
printf("\n\n");

for (i=0;i<5;i++)
{
for (j=0;j<5;j++)
if(i==j)
if((d[i][j]==0))
{min=0;
for(l=0; l<5; l++)
{
sum=sum+d[i][l];
if(d[i][l]<min)
min=d[i][l];}
printf("\nSuma riadka N%d = %d, min = %d",i+1,sum,min);

}
k++;
sum=0;
}

printf("\n\nSum\n");

//for (i=0;i<k;i++)
//if(sum[i]!=0)
//printf("\n\nSum %d  min %d\n, %d",sum[i],min[i], i+1);


	return 0;
}
