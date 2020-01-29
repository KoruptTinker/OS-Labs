#include <stdio.h>

int main(){
	char input;
	printf("Enter a character: ");
	scanf("%c",&input);
	switch(input){
		case '+':
			printf("Process in ready state\n");
			break;
		case '-':
			printf("Process in ready state\n");
			break;
		case '*':
			printf("Process in running state\n");
			break;
		case '/':
			printf("Process moved to waiting state\n");
			break;
		case '$':
			printf("Process waiting for CPU\n");
			break;
		case '#':
			printf("Process completed\n");
			break;
		default:
			printf("Invalid character!\n");
	}
}