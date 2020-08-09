#include <stdio.h>
#include <stdlib.h>




int main(int argc, char *argv[]) {
float x, y;
printf("Vvedit koord tocky(x,y) ");
scanf("%f",&x );
scanf("%f",&y );
if((x>0))
{
if((y>0)||(y==0))
{if((y*y+x*x)<=25)
if((y*y+x*x)>=9)
printf("Tocka vhodyt v vydilenu obl");
else
printf("Tocka ne vhodyt v vydilenu obl");
}
if((y<0))
{if((y*y+x*x)<=25)
printf("Tocka vhodyt v vydilenu obl");}
//else
//printf("Tocka ne vhodyt v vydilenu obl");
}
if((x<0))
printf("Tocka ne vhodyt v vydilenu obl");
	return 0;
}
