#include <stdio.h>
int main()
{
	int n,A[100],j,temp;
	printf("\n\nBubble Sort\n\n");
	printf("Enter the value of n:");
	scanf("%d",&n);
    printf("\n\n");
	printf("Enter the array:");
	printf("\n\n");
	for(int i=0;i<n;i++){
	 printf("Array[%d]:",i);
	 scanf("%d",&A[i]);
}
	for(int i=0;i<n;i++)
	{
		for(j=0;j<(n-i-1);j++){
			if(A[j]>A[j+1]){
				temp=A[j];
				A[j]=A[j+1];
				A[j+1]=temp;
			}
		}
	}
	printf("\n\nThe sorted array elements:\n\n");
	for(int i=0;i<n;i++)
	{
	 printf("Array[%d]:%d",i,A[i]);
	 	 printf("\n");
}
}
