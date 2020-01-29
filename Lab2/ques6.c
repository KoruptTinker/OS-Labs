#include <stdio.h>
#include <math.h>
#include <stdbool.h>

void checkPrime(int num){
	bool flag=true;
	for(int i=1;i<(num/2)+1;i++){
		if(num%i==0 && i!=1){
			flag=false;
			break;
		}
	}
	if(flag){
		printf("\nPrime\n");
	}
	else{
		printf("\nNot prime\n");
	}
}

int main(){
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	checkPrime(num);
}