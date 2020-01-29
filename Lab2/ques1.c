#include <stdio.h>
#include <string.h>

void checkpalindrome(char check[]){
	int low=0;
	int high=strlen(check)-1;
	while(low<high){
		if(check[low++]!=check[high--]){
			printf("Not a palindrome \n");
			return;
		}
	}
	printf("Palindrome \n");
}

int main(){
	char check[1000];
	printf("Enter a string: \n");
	scanf("%s",check);
	checkpalindrome(check);
}


