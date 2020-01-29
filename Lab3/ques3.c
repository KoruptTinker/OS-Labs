#include <stdio.h>

struct c_number{
	int real;
	int complex;
};

struct c_number add(struct c_number inp1,struct c_number inp2){
	struct c_number result;
	result.real=inp1.real+inp2.real;
	result.complex=inp2.complex+inp2.complex;
	return result;
}

struct c_number subtract(struct c_number inp1,struct c_number inp2){
	struct c_number result;
	result.real=inp1.real-inp2.real;
	result.complex=inp1.complex-inp2.complex;
	return result;
}

int main(){
	struct c_number inp1;
	struct c_number inp2;
	struct c_number result_add;
	struct c_number result_sub;
	printf("Enter the real part of first number: ");
	scanf("%d",&inp1.real);
	printf("Enter the complex part of first number: ");
	scanf("%d",&inp1.complex);
	printf("Enter the real part of second number: ");
	scanf("%d",&inp2.real);
	printf("\nEnter the complex part of second number: ");
	scanf("%d",&inp2.complex);

	result_add=add(inp1,inp2);
	result_sub=subtract(inp1,inp2);
	printf("\nAddition result : \nReal part: %d    Complex part: %d",result_add.real,result_add.complex);
	printf("\nSubtraction result : \nReal part: %d    Complex part: %d\n",result_sub.real,result_sub.complex);
}