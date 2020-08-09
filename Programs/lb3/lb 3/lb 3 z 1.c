#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
int u[3][7],i,j,k;
int max, min, ma1,ma2,mi1,mi2;
printf("   \nMasyv U(3,7):");
for (i=0;i<3;i++)
  {printf("\n");
for (j=0;j<7;j++)
{u[i][j]=rand()% 10 -1;
printf("%d ",u[i][j]);
}}
min=u[0][0];
max=u[0][0];
//printf("\nm %d", min);
//printf("\nmax %d", max);


for (i=0;i<3;i++)
for (j=0;j<7;j++){
if(u[i][j]>max)
{max=u[i][j];
ma1=i;
ma2=j;
}
if(u[i][j]<min)
{min=u[i][j];
mi1=i;
mi2=j;
}}
 
printf("\ni %d", ma1);
printf("\nj %d", ma2);

printf("\nmin %d", min);
printf("\nmax %d", max);

k=0;
k=u[mi1][mi2];
u[mi1][mi2]=u[ma1][ma2];
u[ma1][ma2]=k;



printf("\n\nNovyi masyv:");
printf("\n");


for (i=0;i<3;i++)
{
printf("\n");
for (j=0;j<7;j++)
printf("%d ",u[i][j]);
}

	return 0;
}
