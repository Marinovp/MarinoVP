#include <stdio.h>
#include <stdlib.h>


/*
We want to count how many passing grades are entered. We don’t know how many grades there will be.  
Use a sentinel controlled while loop that will ask the user to enter student grades until a value of -1 is entered.  
Use a counter variable to count all the grades that are passing grades, where 70 is the minimum passing grade. 
If there are any grades that are out of the range 0 – 100, present an error message to the user, and do not count
that grade as passing.   We also would like to see what percentage of the valid grades are passing.

*/
main() {

	int studentScore, sum = 0;
	printf("Enter a test score (-1 to quit): \n");
	scanf_s("%i", &studentScore);
	while (studentScore != -1) {
		count = studentScore;
		printf("Enter a test score (-1 to quit): \n");
		scanf_s("%i", &studentScore);
	}

	printf("You enter %i students grades \n", sum);

	system("pause");




}