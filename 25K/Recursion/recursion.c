#include <stdio.h>

int fact(int n){
	if(n == 1){
		printf("1 = ",1);
		return 1;
	}
	else{
		printf("%d x ",n);
		return n*fact(n-1);
	}
}

int main(){
	int n;
	printf("Enter the number to calculate factorial: ");
	scanf("%d",&n);
	printf("%d%c = %d",n , '!' , fact(n));
	return 0;
}
