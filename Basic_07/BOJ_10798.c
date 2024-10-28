#include <stdio.h>

int main()
{

	int i, j;
	
	char array[5][15] = {0, };
	
	for (i=0 ; i<5 ; i++){
		scanf("%s", array[i]);	
	}
	
	for (i=0 ; i<15 ; i++){
		for (j = 0 ; j < 5 ; j++){
			if(array[j][i] != '\0'){
				printf("%c", array[j][i]);
			}
			
		}
		
	}
	
	return 0;
}