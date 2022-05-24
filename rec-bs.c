#include<stdio.h>
int binarysearch(int *arr,int i,int j,int s)
{
	int m;
	if(i>j)
	{
		return 0;
	}
	m=(i+j)/2;
	if(arr[m]==s)
	{
		return 1;
	}
	else if(arr[m]>s)
	{
		j=m-1;
	}
	else
	{
		i=m+1;
	}
	return binarysearch(arr,i,j,s);	
}
void main()
{
	int i,j,n,m,arr[100],s;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&s);
	if(binarysearch(arr,0,n-1,s))
	{
		printf("Found");
	}
	else
	{
		printf("Not Found");
	}
	
}
