#include <stdio.h>
#include <stdlib.h>

/*
Ask user the age, if 21+ , display message they can buy beer,
other wise, display message they cannot buy beer.
*/

main() {

	int age;

	printf("Please enter your age: \n");
	scanf_s("%i", &age);

	if (age >= 21) {
		printf("You can buy beer!!! \n");
	}
	else
		printf("Need to be 21 or older to buy beer. \n");

	system("pause");

}