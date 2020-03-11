#include<stdio.h>
#include<math.h>
int main()
{
   int x1, y1, x2, y2, a,b,distance;

   printf("Enter coordinates of first point: ");
   scanf("%d%d",&x1, &y1);
   printf("Enter coordinates of second point: ");
   scanf("%d%d",&x2,&y2);

 a=pow((x2-x1),2);
 b=pow((y2-y1),2);
 
   

   distance=sqrt(a+b/2);
   printf("Distance = %d",distance);

   return 0;
}

