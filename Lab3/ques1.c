#include <stdio.h>

int getMax(int size, int arr[]){
	int max=0;
	for(int i=0;i<size;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	return max;
}

int getMin(int size,int arr[]){
	int min=9999999;
	for(int i=0;i<size;i++){
		if(min>arr[i]){
			min=arr[i];
		}
	}
	return min;
}

int getAverage(int size, int arr[]){
	int average;
	for(int i=0;i<size;i++){
		average+=arr[i];
	}
	average/=size;
	return average;
}

int main(){
	int size;
	printf("Enter the size of the array: ");
	scanf("%d",&size);
	int arr[size];
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	int max=getMax(size,arr);
	int min=getMin(size,arr);
	int average=getAverage(size,arr);
	printf("\nThe max element is: %d",max);
	printf("\nThe min element is: %d",min);
	printf("\nThe average of the array elements is: %d\n",average);
}