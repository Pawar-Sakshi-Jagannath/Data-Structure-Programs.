#include<stdio.h>
int main()
{
	int arr[10],flag=0,i,j,key,n=10,temp;
	printf("\nEnter 10 elements into array :");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
	 for(j=0;j<n-i-1;j++)
	 {
	 	if(arr[j]>arr[j+1])
	 	{
	 		temp=arr[j];
	 		arr[j]=arr[j+1];
	 		arr[j+1]=temp;
		 }
	 }	
	}
	printf("\nSorted array Elements are :\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	return 0;
}
