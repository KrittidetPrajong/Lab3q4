#include <stdio.h>
int main(){
	int i = 0;
	int sum = 0;
	int input = 0;
	printf("enter a number : ");
	scanf("%d",&input);
	while(input>0){
		printf("enter a number : ");
		sum+=input;
		scanf("%d",&input);
		i++;
	}
	printf("summation = %d\n",sum);
	printf("average = %d\n",sum/i);	
	return 0;		
}
