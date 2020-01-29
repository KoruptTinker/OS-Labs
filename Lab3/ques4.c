#include <stdio.h>

typedef union c_number{
	int real;
	int complex;
}c_num;

typedef struct c_n{
	int real;
	int complex;
}comp;

comp add(c_num inp1,c_num inp2){
	comp result;
	printf("Enter the real part of first number: ");
	scanf("%d",&inp1.real);
	printf("\nEnter the real part of second number: ");
	scanf("%d",&inp2.real);
	result.real=inp1.real+inp2.real;
	printf("\nEnter the imaginary part of first number: ");
	scanf("%d",&inp1.complex);
	printf("\nEnter the imaginary part of second number: ");
	scanf("%d",&inp2.complex);
	result.complex=inp1.complex+inp2.complex;
	return result;
}

comp subtract(c_num inp1,c_num inp2){
	comp result;
	printf("Enter the real part of first number: ");
	scanf("%d",&inp1.real);
	printf("\nEnter the real part of second number: ");
	scanf("%d",&inp2.real);
	result.real=inp1.real-inp2.real;
	printf("\nEnter the imaginary part of first number: ");
	scanf("%d",&inp1.complex);
	printf("\nEnter the imaginary part of second number: ");
	scanf("%d",&inp2.complex);
	result.complex=inp1.complex-inp2.complex;
	return result;
}

int main(){
	comp result_add,result_sub;
	c_num inp1,inp2;
	printf("\n\n---------ADDITION-----------\n\n");
	result_add=add(inp1,inp2);
	printf("\nThe sum is: \nReal part: %d     Imaginary part: %d",result_add.real,result_add.complex);
	printf("\n\n---------SUBTRACTION-----------\n\n");
	result_sub=subtract(inp1,inp2);
	printf("\nThe difference is: \nReal part: %d     Imaginary part: %d\n",result_sub.real,result_sub.complex);
}


