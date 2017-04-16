/*
Marino Vasquez
4/12/2017
Prof. Brunick
COP 1000
*/

#include <stdio.h>
#include <stdlib.h>
//Amount of values that can be entered
#define NUMBER 50

main() {

	/*Ask the user to enter any random number -999 to stop.
	Print the number entered*/

	//Declare variables
	int scores[NUMBER];
	int i;

	//Ask to enter any values
	printf("Enter any number: (-999 to stop) \n");

	//Start loop
	for (i = 0; i < NUMBER; i++) {

		scanf_s("%i", &scores[i]);
		if (scores[i] == -999)
			break;
	};


	//Print values entered
	printf("The number entered are: \n");
	for (i = 0; i < NUMBER; i++) {

		printf_s("%i", scores[i]);
		printf_s("\n");
		if (scores[i] == -999)
			break;
	};

	system("pause");

}