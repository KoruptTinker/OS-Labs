#include <stdio.h>

int sumn(int num){
	int sum=0;
	int first=1;
	for(int i=0;i<num;i++){
		sum+=first;
		first++;
	}
	return sum;
}

int main(){
	int num;
	printf("Enter the value of n: ");
	scanf("%d",&num);
	int res;
	res=sumn(num);
	printf("%d\n",res);
}