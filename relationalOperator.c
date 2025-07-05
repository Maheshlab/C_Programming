#include<stdio.h>
int main(){
	int x, y;
	printf("Mahesh Kumar Shrestha\n");
	
	printf("Enter the integer:\n");
	scanf("%d %d", &x, &y);
	
	if(y>x){
		printf("Y is greater than X\n");
	}else{
		printf("Y is not greater than X");
	}
	return 0;
}
