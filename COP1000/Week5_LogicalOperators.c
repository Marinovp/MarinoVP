#include <stdio.h>
#include <stdlib.h>

main() {

	int a = 5, b = 4, c = 3, d = 2;

	if (a <= b + 1);
	printf("1. (a <= b + 1) is True \n");
	if (a < b && c > b);
	printf("2. (a < b && c > b) is False \n");
	if ( a >= c || d >= 5);
	printf("3. ( a >= c || d >= 5) is True\n");
	if (!(a > b));
	printf("4. (!(a > b)) is False\n");
	if ( b >= a && !( d < b) );
	printf("5. ( b >= a && !( d < b) ) is True\n");

	system("pause");
}