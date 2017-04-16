#include <stdio.h>
#include <stdlib.h>



/*
Marino Vasquez
3/4/2017
COP 1000

Write a program to ask the user to enter 5 values then display:
1.	Display the smallest number entered
2.	Display the largest number entered
3.	Display the sum of the five numbers entered
4.	Display the average of the five numbers entered


*/
int main()
{


	int a = 5, b = 4, c = 3, d = 2;
	if (a < b && c > 4 || d >= 2)
	printf("True");
	else printf("False");

	//int x = 3, y = 5, counter = 0;
	//	while (counter <=y){
	//		if (x <= y)
	//			printf("Hello\n");
	//		else
	//			printf("World\n");
	//		counter++;
	//		x++;
	//		}

	//int a = 12, b = 7, c = 2, result;

	//result = a + b * 2;

	//printf("%i", result);


	/*int x;
	for (x = 1; x < 10; x++);
	printf("Hello World\n");
	printf("%i", x);
*/


	//int x = 3;


	//if (x == x)
	//	printf("Hello\n");
	//else
	//	printf("World\n");

	//int x;
	//for (x = 1; x < 10; x = x * 2);
	//printf("%i Hello World\n", x);

	//int num1 = 5, num2 = 10, num3 = 7;
	//if (num1 > num2 || num2 > num3)
	//	printf("Hello\n");
	//else
	//	printf("World\n");

	int x = 3;
	while (x > 10) {
		printf("%i Hello World\n", x);
		x++;

	}
	printf("%i", x);
	//int count = 0, max = -1000, min = 1000,	sum = 0;

	///*Present the choices to the user*/
	//printf("1. Enter 5 numbers by choosing option 1 from the menu: \n");
	//printf("2. Display the smallest number entered \n");
	//printf("3. Display the largest number entered \n");
	//printf("4. Display the number of values entered: \n");
	//printf("5. Display the average of the five numbers entered \n");
	//printf("6-> Quit the program\n");
	//
	///*Start loop*/
	//for (;;)
	//{
	//	int choice;
	//	printf("Choose an option from the menu \n");
	//	scanf("%d", &choice);

	//	if (count == 0 && choice >= 2 && choice <= 4)
	//	{
	//		printf("Enter 5 numbers by choosing option 1 from the menu: \n");
	//		continue;
	//	}

	//	/*Display the results*/
	//	switch (choice)
	//	{
	//	case 1:
	//		for (;;)
	//		{
	//			float num;
	//			printf("Enter a value (enter -999 to quit score input):\n");
	//			scanf("%f", &num);
	//			if (num == -999)
	//				break;
	//			sum += num;
	//			count++;
	//			/*Calculate min and max values*/
	//			if (max < num)
	//			{
	//				max = num;
	//			}
	//			if (min > num)
	//			{
	//				min = num;
	//			}
	//		}
	//		break;

	//	case 2:
	//		printf("The lowest exam score is : %i\n", min);
	//		break;

	//	case 3:
	//		printf("The highest exam score is : %i\n", max);
	//		break;

	//	case 4:
	//	{
	//		
	//		printf("The number of values entered was: : %i\n", count);
	//		break;
	//	}

	//	
	//	/*Calculate average*/
	//	case 5:
	//	{
	//		float avg = sum / count;
	//		printf("The average of the numbers was: %.2lf \n", avg);
	//		break;
	//	}

	//	default:
	//		printf("You need to enter a option from the menu!");
	//		break;
	//	}
	//}

	system("pause");
}