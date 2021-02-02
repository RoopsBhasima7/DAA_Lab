#include <stdio.h>
#include <stdlib.h>
#include<time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int GCD_General(int a,int b); 
int GCD_E(int a,int b); 

int main(){
	int a,b,gcd1,gcd2;
	clock_t t1s,t1e,t2s,t2e;
	double t1,t2;
	printf("Enter a and b: ");
	
	scanf("%d",&a);
	scanf("%d",&b);
	
	t1s = clock();
	gcd1 = GCD_General(a,b);
	t1e = clock() - t1s;
	gcd2 = GCD_E(a,b);
	t2s = clock();
	t2e = clock() - t2s;
	
	printf("Gcd of %d and %d in general is: %d\n",a,b,gcd1);
	printf("Gcd of %d and %d in Euclidean is: %d",a,b,gcd2);
	printf("\n\n\n");
	
	
	t1 = ((double)t1e)/CLOCKS_PER_SEC;
	t2 = ((double)t2e)/CLOCKS_PER_SEC;	
	
	 
	printf("Time for General GCD %.10f.\n",t1);
	printf("Time for Euclidean GCD %.10f.",t2);
		
	return 0;
}

int GCD_General(int a, int b){
	int x,i;
	x  = a<b?a:b;
	for(i=x;i>=1;i--){
		if(a%i == 0 && b%i==0)
			return i;
	}	
}

int GCD_E(int a,int b ){
	if (a == 0) 
        return b; 
    return GCD_E(b % a, a);
}
