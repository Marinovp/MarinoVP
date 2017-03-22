#include <stdio.h>
#include <stdlib.h>

////10.6 Type Casting
//main() {
//
//	int a = 10, b = 3, result;
//	double d1 = 4.5, d2 = 3.1, doubleResult;
//
//	result = (double) (b % a) * b + (d1 + a);
//
//	printf("%.1lf \n", &result);
//
//	system("pause");
//
//	//This is supposed to validated to 48.0 it doesnt.
//}


//10.7 Practice

main() {

	int a = 2, b = 4, c = 11, result;
	double d1 = 3.4, d2 = 1.7, doubleResult;

	//result = a + c / b ; //4 - Good
	//result = (a + c) / b; //3 -Good
	//result = (b * a) + c / a; //13 - Good
	//result = (int)d1 + (int)d2; //4 - Good
	//doubleResult = c / b + 6; // 8 - Good
	//doubleResult = (double)c / b + a; // 4.75 - Good
	//doubleResult = d1 + d2 * a ; //6.8 - Good
	//doubleResult = (a + c) % a * d2 ; //1.7 - Good
	doubleResult = a * -d2; // -3.4 - Good

	//printf("%i \n", result);
	printf("%.2lf \n", doubleResult);

	system("pause");
}

