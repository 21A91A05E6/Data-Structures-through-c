#include<stdio.h>
int linearsearch(int *arr,int n,int s)
{
	static int i=0;
	if(i==n)
	{
		return 0;
	}
	if(arr[i]==s)
	{
		return 1;
	}
	i++;
	return linearsearch(arr,n,s);
}
void main()
{
	int i,n,arr[100],s;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&s);
	if(linearsearch(arr,n,s))
	{
		printf("Found");
	}
	else
	{
		printf("Not Found");
	}
	
}
