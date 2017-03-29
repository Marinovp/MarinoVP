//#include <stdio.h>
//#include <stdlib.h>

///* Case #1
//	Create a loop that will output all the multiples of 5 that 
//	are greater than zero and less than 60 (do not include 60)
//*/
//main(){
//
//	int count = 5;
//	while (count < 60) {
//		printf("%i \n", count);
//		count += 5;
//	}
//
//	system("pause");
//}


#include <stdio.h>
#include <stdlib.h>
/* Case #2
Create a loop that will output all the numbers less than 200 that are 
evenly divisible by both 2 and 7. 
*/
main() {
		// Declare variables
		int count = 14, agg = 1, result=0;
		
		// Check if result is less than 200
		while (result <= 200) {
			
			//print result
			printf("%i \n", result);

			// calculate multiples of 7
			result = count * agg;

			// Add 1 to aggregation to be multiply later
			agg++;						
		}

		system("pause");
}


//#include <stdio.h>
//#include <stdlib.h>
///* Case #3
//Create a loop that will calculate the sum of the multiples of 8 
//that are between 100 and 500. Output the sum only. */
//
//main() {
//
//	// Declare variables
//	int count = 104, sum = 0 ;
//
//	//Start loop
//	while (count <= 500) {
//		
//		//Sum values
//		sum += count;
//
//		//add 8 (Multiple of 8)
//		count+=8;
//		
//	}
//
//	//Print sum 
//	printf("%i \n", sum);
//	
//	system("pause");
//}



//#include <stdio.h>
//#include <stdlib.h>
//
///*
//Create a loop that will output the sum of all odd numbers between 20 and 100. 
//*/
//main() {
//
//	//Declare variables
//	int counter = 21, sum = 0;
//
//	//Start loop
//	while (counter <= 100) {
//		
//		sum += counter;
//			counter+=2;
//	}
//	//Print sum of odd numbers
//	printf("%i \n", sum);
//
//	system("pause");
//}