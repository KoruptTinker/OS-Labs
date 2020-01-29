#include <stdio.h>
#include <string.h>

void concatenate(char n1[],char n2[]){
	char res[1000];
	size_t  count = 0;
	char *check=n1;
	while(*check!='\0'){
		res[count]=*check;
		check++;
		count++;
	}
	char *check2 = n2;
	while(*check2!='\0'){
		res[count]=*check2;
		check2++;
		count++;
	}
	printf("%s\n",res);
}

int main(){
	char n1[500];
	char n2[500];
	printf("Enter the first string : ");
	scanf("%s",n1);
	printf("\nEnter the second string: ");
	scanf("%s",n2);
	concatenate(n1,n2);
}
