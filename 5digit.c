#include <stdio.h>
int main(void)
{
int i,temp = 0;
printf("Enter a +ve 5 digit number :");
scanf("%d",&i);
if (( i <= 99999 ) && ( i > 9999 ))
{
printf(" %d",(i/10000) + 1);
printf(" %d",((( i/100) % 100)/10) + 1);
printf(" %d",(( i/100) % 10 ) + 1);
printf(" %d",((i % 100) / 10) + 1 );
printf(" %d",(i % 10) + 1);
}
else
printf("\n Pl.enter +ve five digit number");
return 0;
}

