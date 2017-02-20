#include <stdio.h>
#include <stdlib.h>

/*
Marino Vasquez
2/19/2017
COP 10000

Description:
Calculate shipping prices base on weight. 
Weight limit: > 50 pounds cannot be shipped.
				- Pounds are not pro-rated. 600 = 900 or 1000
Shipping Rate: 
	<= 10 pounds = 2.00 * distance / segment of the distance.
	> 10 & <= 50 pounds = 4.5 * distance / segment of the distance.
*/

main() {
	//Create the variables
	double pounds, price = 0, price2 = 0, packagePrice;
	int packageDistance, distance = 0;
	
	//Get the requirements for the package
	printf("How far is the package traveling? \n");
	scanf_s("%i", &distance);
	printf("How many pounds does the package weight? \n");
	scanf_s("%lf", &pounds);
	
	/* Check if the distance is divisible by 500. If so divide by 500 and add 1 per every 500.
	*/

	if (distance % 500 == 0);
	packageDistance = (distance / 500 + 1);
	
	// Package exceed the requirements of 50 pounds
	if (pounds > 50) {
		printf("Package exceed pounds limits of 50 \n", pounds);
	}
	
	// Assign the price base on pounds
	else
		if (pounds <= 10) price = 2.00;
	if (pounds > 10 & pounds <= 50) price = 4.5;

	//Calculate the price
	packagePrice = price * packageDistance;
	
	//Display the total price
	printf("Your shipping charge is %.2lf \n", packagePrice);
	
	
	system("pause");
}