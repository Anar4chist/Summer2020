#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
int i,j;
float a[4],b[4],l[5][4];

for (i=0;i<4;i++)
{a[i]=0;
b[i]=0;
}

printf("   \nMasyv l(5,4):");
for (i=0;i<5;i++)
  {
  printf("\n");
for (j=0;j<4;j++)
{l[i][j]=rand()% 10 -5;
printf("%0.0f ",l[i][j]);
}}
int sum=0;

for (j=0;j<4;j++)
  {
for (i=0;i<5;i++)
{if(l[i][j]<0)
  {a[j]=a[j]+l[i][j];
  b[j]++;
  }
}}

printf("\n\nSumy \n\n");
  for (i=0;i<4;i++)
  {a[i]=a[i]/b[i];
  printf("%0.1f ",a[i]);
}

	return 0;
}
