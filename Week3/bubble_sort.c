#include<stdio.h>
void Bubble_sort(int a[100],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j] > a[j+1])
			{
				int t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}
	}
}
int main()
{
	int n,a[30];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	Bubble_sort(a,n);
	printf("Elements after sorting\n");
	for(int i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}