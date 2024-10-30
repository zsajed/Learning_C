#include <stdio.h>

int main(int argc, char *argv[]){
	//			0		1	2, ........ n
	//argv[] = ( "name of application", nextArg, ...)
	printf("Program name %s\n", argv[0]);	

	if (argc ==2){
		printf("The argument supplied is %s\n", argv[1]);

	}
	else if (argc > 2){
		printf("Too many arguments supplied!\n");
	}
	else{
		printf("At least one argument by the user is expected!\n");
	}
	return 0;
}
