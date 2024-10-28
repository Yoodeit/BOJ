#include <stdio.h>

int main()
{
	int row, column;
	int i, j;
	
	
	scanf("%d", &row);
	scanf("%d", &column);
	
	int first_Array[row][column];
	int second_Array[row][column];
	int total_Array[row][column];
	
	for (i = 0 ; i<row ; i++ ){
		for (j=0;j<column;j++){
			scanf("%d", &first_Array[i][j]);
			
		}
	}
	
	for (i = 0 ; i<row ; i++ ){
		for (j=0 ; j<column ; j++){
			scanf("%d", &second_Array[i][j]);
		}
	}
	
	for (i = 0 ; i<row ; i++ ){
		for (j=0 ; j<column ; j++){
			total_Array[i][j] = first_Array[i][j] + second_Array[i][j];
		}
	}
	
	for (i = 0 ; i<row ; i++ ){
		for (j=0 ; j<column ; j++){
			printf("%d", total_Array[i][j]);
			if(j<column-1){
				printf(" ");
			}
			
		}
		printf("\n");
		
	}
	
	
}