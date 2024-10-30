#include <stdio.h> // library or header file that contains standard input/output operations
#include "usefulfunctions.h"
/* main() function every c program must have a main..
it has a returnable 'int' this is for exit codes. */
int main(void){

	//printf is refrenced from the stdio.h library to output to standard out
	printf("Hello World!\n");
	printf("%d\n", sqr(255));
	printf("Goodbye World!\n");
	return 0; // This is our exit status - 0 is good, 1 is bad....
}
