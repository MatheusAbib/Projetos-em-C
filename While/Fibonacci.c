#include <stdio.h>

int main() {
 
    int numA = 0;
 
    int numB = 1;
 
	int fib;
 
	printf("Sequencia de fibonnaci \n");
 
     while (numB < 200){
 
		printf("%i ", numB);
 
		fib = numA + numB;
 
		numA = numB;
 
		numB = fib;
 
 
	}
 
    return 0;
 
}
 
 
