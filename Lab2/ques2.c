#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int reverse(int num){
	int res=0;
	int temp=num;
	int count=0;
	while(temp!=0){
		temp=temp/10;
		count++;
	}
	for(int i=0;i<count;i++){
		temp=num%10;
		res=res+(pow(10,count-i-1)*temp);
		num=num/10;
	}
	return res;
}

int main(){
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	int res=reverse(num);
	printf("%d\n",res);
}



