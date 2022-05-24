#include<stdio.h>
int binarysearch(int *arr,int n,int s)
{
	int i=0,j=n-1,m;
	while(i<=j)
	{
		m=(i+j)/2;
		if(arr[m]==s)
		{
			return m;
		}
		else if(arr[m]<s)
		{
			i=m+1;
		}
		else
		{
			j=m-1;
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
	printf("%d",binarysearch(arr,n,s));
}
