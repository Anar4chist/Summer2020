#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
int a[10],i, max,max1,max2;
float sr;
max=0;
max1=0;
max2=0;

printf("     \nMasyv A (10):\n");
for (i=0;i<10;i++)
{a[i]=rand()% 30 +1;
printf("%d ",a[i]);
}
int k,j;
 
    k = 0;
    for (i=10; i>0;  i--)
    {
        for (j=10; j>0; j--) {
            if (a[j] < a[j-1]) {
                k= a[j];
                a[j] = a[j - 1];
                a[j - 1] =k;
            }

        }
        //x++;
    }
printf("     \n");

float s1=0;
float s2=0;
float s3;
s3=0;
for (i=0;i<10;i++)
{printf("%d ",a[i] );
if(i<4)
s1=a[i]+s1; 
if(i>3)
s2=a[i]+s2; 
}
s3=s1/s2;
printf("\nChastka  %0.1f ",s3 );
return 0;
}

