#include <stdio.h>
#include <string.h>

void fibbonacci(int num){
	int first=1;
	int second=1;
	int third=0;
	if(num==1){
		printf("%d\n",first);
	}
	else if(num==2){
		printf("%d \n%d \n",first,second);
	}
	else{
		printf("%d \n%d \n",first,second);
	}
	for(int i=2;i<num;i++){
		third=first+second;
		printf("%d \n",third);
		first=second;
		second=third;
	}
}

int main(){
	int num;
	printf("Enter n: ");
	scanf("%d",&num);
	fibbonacci(num);
}