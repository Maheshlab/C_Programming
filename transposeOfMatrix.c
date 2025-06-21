#include <stdio.h>
int main(){
	int i, j, r, c;
	printf("Mahesh Kumar Shrestha\n");
	printf("Enter the number of rows of a matrix:\n");
	scanf("%d", &r);
	printf("Enter the number of columns of a matrix:\n");
	scanf("%D", &c);
		printf("Enter the element of a matrix:\n");
		int 	mat[100][100], trans[100][100];
	for(i=0; i<r; i++){
		for (j=0; j<c; j++){
		scanf("%d", &mat[i][j]);
		}
	}
	printf("The element of a matrix is\n");
	for(i=0; i<r; i++){
		for (j=0; j<c; j++){
	     printf("%d\t", mat[i][j]);
		}
		printf("\n");
	}
		for(i=0; i<c; i++){
		for (j=0; j<r; j++){
	     trans[i][j] = mat[j][i];
		}
	}
	printf("The element of a transpose matrix is\n");
	for(i=0; i<c; i++){
		for (j=0; j<r; j++){
	     printf("%d\t", trans[i][j]);
		}
		printf("\n");
	}
	return 0;
}
