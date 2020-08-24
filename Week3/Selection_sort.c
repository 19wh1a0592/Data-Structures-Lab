#include<stdio.h>
void Selection_sort(int a[100],int n)
{
	int i,min,j,t;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j] < a[min])
			min=j;
		}
		t=a[i];
		a[i] = a[min];
		a[min] = t;
	}
}
int main()
{
	int n,a[50];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	Selection_sort(a,n);
	printf("Elements after sorting\n");
	for(int i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}