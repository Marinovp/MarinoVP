#include <stdio.h>
#include <stdlib.h>

main(){

	/*
	
			COUNTER CONTROL LOOP
			
	*/


	/*
	//While Loop 1 - 10
	int count = 1;

	while (count <= 10) {
		printf("%i \n", count);
		count = count + 1;
		}
		
		*/

	// While Loop multiples of 5 less than 100
/*
	int count = 5;

	while (count <= 100) {
		printf("%i \n", count);
		count = count + 5;
	}
		
	*/
	
	//While Loop even numbers in desc order from 70 - 50 inclusive
	/*
	int count = 70;


	while (count >= 50) {
		printf("%i \n", count);
		count = count - 2;
	}
	*/

	/*
	int count = 1, sum=0;


	while (count <= 100) {
		
		sum = sum + count;
		count = count + 1;
	}

	printf("%i \n", sum);


	*/

	//   SENTINEL CONTROLLED LOOP

	/*
	Ask user to enter test scores. When they have entered all the scores, they will enter the value -1.
	The program will sum up all the scored entered, and output sum

	70 80 90 -1  Expected 240
	*/


	int score, sum = 0;
	printf("Enter a test score (-1 to quit): \n");
	scanf_s("%i", &score);
	while (score != -1) {
		sum = sum + score;
		printf("Enter a test score (-1 to quit): \n");
			scanf_s("%i", &score);
		}

	printf("The sum of the score  is %i \n", sum);

	system("pause");
}