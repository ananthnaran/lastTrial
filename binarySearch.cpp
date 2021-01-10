#include<stdio.h>

int binarySearch(int arr[],int l,int r,int x)
{
	int mid=0;
	while(l<=r)
	{
		mid=l+(r-l)/2;
		if(arr[mid]==x)
		return mid;
		else if(arr[mid]<x)
		l=mid+1;
		else 
		r=mid-1;
	}
	return -1;
}

int main()
{
	int arr[]={2,3,4,10,40};
	int n=binarySearch(arr,0,4,40);
	printf("%d",n);	
}
