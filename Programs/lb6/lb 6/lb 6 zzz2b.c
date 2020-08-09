#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
{
    char m1[]="Krulov vladyslav Viktorovuch";
    char m2[10];
    
    int z,i,s,j,n,l,max;


printf("Vvedit tekst ");
//gets(m1);

s=0;
j=0;
n=strlen(m1);

printf("\n");

for(i=0; i<n; i++){
if(m1[i]=='a')
z++;
printf("%c",m1[i]);
}
printf("\n\nDovjyna %d",n);
printf("\nK-st liter a - %d\n\n",z);

j=0;
z=0;
l=0;
for(i=0; i<n; i++){
if(m1[i]==' ')
z++;
if(z==2)

{
m2[j]=m1[i];
j++;

 }


if(z==0)
l++;
}
m2[j]=' ';
puts(m2);

printf("\nk-st prizvichi %d",l);
	return 0;
}



