#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
struct complex
{
	int real,img;
};
void add(struct complex c1,struct complex c2)
{
	printf("Addition = %d + i %d\n",c1.real + c2.real,c1.img + c2.img);
}
void sub(struct complex c1,struct complex c2)
{
	printf("Subtraction = %d + i %d\n",c1.real - c2.real,c1.img - c2.img);
}
void mul(struct complex c1,struct complex c2)
{
	int r = (c1.real*c2.real) - (c1.img*c2.img);
	int i = (c1.real*c2.img) + (c2.real*c1.img);
	printf("Multiplication = %d +i %d\n",r,i);
}	
int main()
{
	struct complex c1,c2;
	scanf("%d%d",&c1.real,&c1.img);
	scanf("%d%d",&c2.real,&c2.img);
	add(c1,c2);
	sub(c1,c2);
	mul(c1,c2);
}
