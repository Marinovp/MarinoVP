#include <stdio.h>
#include <stdlib.h>


//// Calculate score
//main() {
//
//	int score, count = 0, sum = 0;
//	double average;
//
//	printf("Enter a test score (-1 to quit): \n");
//	scanf("%i", &score);
//
//	while (score != -1) {
//		count = count + 1;
//		sum = sum + score;
//		printf("Enter a test score (-1 to quit): \n");
//			scanf_s("%i", &score);
//			}
//	
//	average = (double) sum / count;
//	printf("\nThe sume of the scores is: %i\n", sum);
//	printf("You entered %i scores. \n", count);
//	printf("The average scoe is: %.2lf\n", average);
//	system("pause");
//}

//Case 2

/*
Ask the user to enter the number of miles they traveled, and how much
gasoline was used. Output the miles per gallong for that tank.
Continue asking for miles / gasoline until the user enters -1.
Calculate the overall miles per gallon that the user achieved for
all tanks of fas. Output that result.
*/
//
//main() {
//
//	// Declare variables
//	double miles, gallons , milesPerGalon;
//	double totalMiles = 0.0, totalGallons = 0.0, overallMilesPerGallon;
//
//	//Ask the user to enter the gallons of gas used
//	printf("Enter the gallons of gas used (-1 to quit): ");
//	scanf_s("%lf", &gallons);
//	
//	//Start loop for asking gallons of gas
//	while (gallons != -1){ 
//		totalGallons = totalGallons + gallons;
//
//
//		//Ask the user the miles driven
//		printf("Enter the miles driven: ");
//		scanf_s("%lf", &miles);
//
//		//Calculate miles per gallons
//		milesPerGalon = miles / gallons;
//		totalMiles = totalMiles + miles;
//
//		//Print  miles per gallon
//		printf("For this tank you got %.2lf miles per gallon. \n", milesPerGalon);
//
//		printf("Enter the gallons of gas used (-1 to quit): ");
//		scanf_s("%lf", &gallons);
//
//	}
//
//	//Calculate overall miles per gallon
//	overallMilesPerGallon = totalMiles / totalGallons;
//
//		printf("Your average for these tanks is: %.2lf miles per gallon. \n", overallMilesPerGallon);
//	system("pause");
//}


// Case 3 - Factorial
/*
The factorial of an integer n, is the product of
the consecutives integers 1 - n. As the user to enter an 
integer, calculate and output the factorial of that number.
Only use intergers less than 10.
*/

main(){

	int number, factorial = 1, count;

	printf("Enter an integer: ");
	scanf_s("%i", &number);

	count = number;
		while (count > 0) {
			factorial = factorial * count;
			count = count - 1;
	}
	
		printf("The factorial: %i \n", factorial);

	system("pause");
}