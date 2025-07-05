#include<stdio.h>
// Break---> breaks the entire loop
//Continue---> Bypass
int main(){
	int i;
	for(i=0; i<100; i++){
		if(i==15)
		continue;
		printf("%d\n", i);
	}
	
	return 0;
}
