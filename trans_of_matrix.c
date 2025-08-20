#include <stdio.h>
int main(){
	int i, j, row, column,	mat[100][100], trans[100][100];
	printf("Mahesh Kumar Shrestha\n");
	printf("Enter the number of rows of a matrix:\n");
	scanf("%d", &row);
	printf("Enter the number of columns of a matrix:\n");
	scanf("%d", &column);
	
		printf("Enter the element of a matrix:\n");		 
	for(i=0; i<row; i++){
		for (j=0; j<column; j++){
		scanf("%d", &mat[i][j]);
		}
	}
	 
	printf("The element of a matrix is\n");
	for(i=0; i<row; i++){
		for (j=0; j<column; j++){
	     printf("%d\t", mat[i][j]);
		}
		printf("\n");
	}
		for(i=0; i<column; i++){
		for (j=0; j<row; j++){
	     trans[i][j] = mat[j][i];
		}
	}
	printf("The element of a transpose matrix is\n");
	for(i=0; i<column; i++){
		for (j=0; j<row; j++){
	     printf("%d\t", trans[i][j]);
		}
		printf("\n");
	}
	return 0;
}
