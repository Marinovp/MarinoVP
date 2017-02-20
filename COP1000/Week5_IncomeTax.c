#include <stdio.h>
#include <stdlib.h>

/*
Ask user for income last year. If Income < 15k, not taxes needs to be paid.
If Income >= 15k <25k, taxes are 15%, Income>25k, taxes = 20%
*/

main() {

	double incomeTax,income, netIncome;

	printf("Please enter your income for last year: \n");
		scanf_s("%lf \n", &income);
		printf("Your income is %.2lf \n", income);
		if (income < 15000)
			incomeTax = 0;
		else
			if (income >= 25000)
				incomeTax = income * 0.20;
			else
				incomeTax = income * 0.15;

		netIncome = income - incomeTax;

		printf("Your net income is %.2lf \n", netIncome);
		printf("Your income tax is %.2lf \n", incomeTax);

		system("pause");

}