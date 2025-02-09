// Write a program to display the sequence 1, 2, 2, 4, 8, 32, 256,

# include<stdio.h>

int main(){
	int prev = 1, current = 2;
	int len=7;
	printf("1 2 ");
	for (int i = 0; i<len; i++){
		int temp = prev * current;
		prev = current;
		current = temp;
	
		printf("%d ", temp);
	}

	return 0;
}
