#include <stdio.h>
int main()
{
	int n,A[100];
	printf("\n\nSelection Sort\n\n");
	printf("Enter the value of n:");
	scanf("%d",&n);
    printf("\n\n");
	printf("Enter the array:");
	printf("\n\n");
	for(int i=0;i<n;i++){
	 printf("Array[%d]:",i);
	 scanf("%d",&A[i]);
}
	for(int i=0;i<(n-1);i++)
	{
		int least=i;
		for(int j=i+1;j<n;j++)
		{
			if(A[j]<A[least])
			least=j;
		}
		int temp=A[i];
		A[i]=A[least];
		A[least]=temp;
	}
	printf("\n\nThe sorted array elements:\n\n");
	for(int i=0;i<n;i++)
	{
	 printf("Array[%d]:%d",i,A[i]);
	 	 printf("\n");
}
}
