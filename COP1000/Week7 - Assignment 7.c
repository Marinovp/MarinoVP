#include <stdio.h>
#include <stdlib.h>




	main() {
	
		int number , count =0 , sum=0,max= 1, min = 1;
		double average;
	
		printf("Enter a value (-1 to quit): \n");
		scanf("%i", &number);
	

		//for(number != -1; count =0 ; number=0)
		while (number != -1) 
		{			

				count = count + 1;
				sum = sum + number;
				printf("Enter a value (-1 to quit): \n");
					scanf_s("%i", &number);
					
					if (number > max ) {
						max = number;
					}
					else if (number < max && number > min) {
						min = number;
			}
					
			

		}
		//Calculate the average
		average = (double) sum / count;

		printf("The lowest number was:%i \n", min);
		printf("The highest number was: %i \n", max);
		printf("The number of values entered was %i \n", count);
		printf("The average of the numbers was: %.2lf\n", average);
		system("pause");
	}