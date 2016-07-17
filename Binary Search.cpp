 /* 
  # Program: To Implement a Binary search
  # Author : Saurav Bhandari [0529]
  # Date   : 7/17/2016
  # Ref    : Data structures using C and C++  , Chap 2, Page 133
 */

#include <stdio.h>

int main()
{
	int i,arr[10]={1,5,9,10,22,45,78,99,100,959},n,low=0,high=9,mid,flag=0;
	for (i=0;i<10;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n\nEnter a element from given array to search\n");	
	scanf("%d",&n);
	
	while (low <= high)
	{
		mid=(low+high)/2;
		
		if (n==arr[mid])
		{
			flag=1;
			break;
		}
		else if(n<arr[mid])
				high=mid-1;
				
			else
				low=mid+1;
	}
	
	if(flag==1)
		printf("data :%d found in memory location %u",n,&n);
		else
		printf("Data not found");
		return 0;
}

