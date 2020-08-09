#include <stdio.h>
#include <stdlib.h>




int main(int argc, char *argv[]) {
int a[10][10],n,m, i,j,l,k;
int b[10];
printf("\n Vvedit n,m ");
scanf("%d %d",&n, &m);
printf("   \nMasyv A(n,m):");

for (i=0;i<n;i++)
{printf("\n");
for (j=0;j<m;j++)
{a[i][j]=rand()% 20 +1;
printf("%d ",a[i][j]);
if(a[i][j]%2==0)
{l++;
//printf("k%d ",l);
}
else
l=0;
if(l==n)
k=i+1;
}
l=0;
}

printf("\n\nNomer ostanuoho Riadka z parnymy %d",k);
return 0;
}



