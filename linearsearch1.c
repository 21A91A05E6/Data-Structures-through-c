#include<stdio.h>
int linearsearch(int *arr,int n,int s)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(arr[i]==s)
		{
			return i;
		}
	}
	return -1;
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
	printf("%d",linearsearch(arr,n,s));
}

