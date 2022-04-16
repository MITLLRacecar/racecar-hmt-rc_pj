
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10


int main(void) {
	int i,e;
	int sit_num;
	int seats[SIZE]={0};
	
	for(i=0; i<=10; i++){
	printf("=======================\n");
	printf("      WellCome!\n");
	printf("-----------------------\n");
	printf("|1|2|3|4|5|6|7|8|9|10|\n");
	printf("-----------------------\n");
	for(e=0; e<10; e++){
		printf("|%d",seats[e]);
	}
	
	printf("|\n");
	printf("=======================\n");
	printf("correct your sit:");
	scanf("%d",&sit_num);
	
	if(sit_num<0){
	break;}
	
	if(seats[sit_num-1]==0){
		seats[sit_num-1]=1;
		printf("-ok-\n");
	}
	else{
		printf("=error=\n");
	}
	printf("\n\n\n\n");
}
	
	return 0;
}

