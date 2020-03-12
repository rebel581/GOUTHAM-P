#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,s,peri,area=0.0;
	printf("Enter values of 3 sides of a triangle :");
	scanf("%f%f%f",&a,&b,&c);
	s=(a+b+c)/2;
	peri=a+b+c;
	area=(float)
        sqrt(s*(s-a)*(s-b)*(s-c));
	printf("\n The sides of the triangle are:%f,%f,%f",a,b,c);
	printf("\n The perimeter of the triangle is:%f",peri);
	printf("\n The area of the triangle :%f",area);
	
}
