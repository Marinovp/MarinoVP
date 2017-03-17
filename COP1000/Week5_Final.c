#include <stdio.h>
#include <stdlib.h>

main(){

	/*
	Marino Vasquez
	3/16/2017
	COP 10000

	Description:
	We want to count how many passing grades are entered. We don’t know how many grades there will be.
	Use a sentinel controlled while loop that will ask the user to enter student grades until a value of -1 is entered.
	Use a counter variable to count all the grades that are passing grades, where 70 is the minimum passing grade.
	If there are any grades that are out of the range 0 – 100, present an error message to the user, and do not count
	that grade as passing.
	We also would like to see what percentage of the valid grades are passing.

	*/

	// Declare Variables

	int grades = 0, count = 0;
	double percentage=0, passingGrades=0;
	

		//printf("Enter a the student grades (-1 to quit): \n");
		//scanf_s("%i", &grades);
		while (grades != -1) {
			
			//Count the grades entered
			printf("Enter the student grade (-1 to quit): \n");
			scanf_s("%i", &grades);

			if (grades <= 100 && grades >= 70)
				count = count + 1;
			

			if (grades >100 || grades < -1)
				printf("This is not a passing grade \n");
		
			// How many passing grades were entered

			if (grades >=0 && grades <= 100)
				passingGrades = passingGrades + 1;

			
		}

		
		// Print how many grades were entered
		printf("You entered %i passing grades \n", count);

		//Print the average of grades
		printf("%.1lf%% of the valid grades entered are passing grades \n", count/passingGrades*100);
		
		//
		//printf("The percentage of passing grade is %i \n", percentage);
		


	system("pause");
}