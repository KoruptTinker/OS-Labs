#include <stdio.h>

struct proc{
	int process_id,cpu_id,parent_id,total_wait_time;
	char state[100];
};

int main(){
	struct proc storage[10];
	for(int i=0;i<10;i++){
		printf("\nEnter the Process ID of process %d: ",(i+1));
		scanf("%d",&storage[i].process_id);
		printf("\nEnter the CPU ID of process %d: ",(i+1));
		scanf("%d",&storage[i].cpu_id);
		printf("\nEnter the state of process %d: ",(i+1));
		scanf("%s",storage[i].state);
		printf("\nEnter the Parent ID of process %d: ",(i+1));
		scanf("%d",&storage[i].parent_id);
		printf("\nEnter the total wait time of process %d: ",(i+1));
		scanf("%d",&storage[i].total_wait_time);
	}
	for(int i=0;i<10;i++){
		printf("\nProcess ID of process %d is: %d",(i+1),storage[i].process_id);
		printf("\nThe CPU ID of process %d is: %d",(i+1),storage[i].cpu_id);
		printf("\nThe state of process %d is: %s",(i+1),storage[i].state);
		printf("\nThe Parent ID of process %d is: %d",(i+1),storage[i].parent_id);
		printf("\nThe total wait time of process %d is: %d",(i+1),storage[i].total_wait_time);
		printf("\n\n");
	}
}



