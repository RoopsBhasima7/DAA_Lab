#include <stdio.h>
int main()
{
	int n,A[100],j,temp;
	printf("\n\nInsertion Sort\n\n");
	printf("Enter the value of n:");
	scanf("%d",&n);
    printf("\n\n");
	printf("Enter the array:");
	printf("\n\n");
	for(int i=0;i<n;i++){
	 printf("Array[%d]:",i);
	 scanf("%d",&A[i]);
}
	for(int i=1;i<n;i++)
	{
		temp=A[i];
		j=i-1;
		while(temp<A[j]&&j>=0)
		{
			A[j+1]=A[j];
			j--;
		}
		A[j+1]=temp;
		
	}
	printf("\n\nThe sorted array elements:\n\n");
	for(int i=0;i<n;i++)
	{
	 printf("Array[%d]:%d",i,A[i]);
	 	 printf("\n");
}
}

