/*
 ==================================================
 Workshop #2 (Part - 1) :
 ==================================================
	Name : Khoshgadam Aliyeva
	ID : 155103195
	Email : kaliyeva@myseneca.ca
	Section : IPC144 - NKK
	*/
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int toonies, loonies, quarters,dimes,nichel,pennies ;
	int remainder;
	int amount, bal_dis;

	printf("Change Maker Machine\n");
	printf("====================\n");
	printf("Enter dollars and cents amount to convert to coins: $");
	scanf("%lf", &amount);

	printf("Service fee (5.0 percent):0.50\n");
	amount= (double)amount - (double)amount * 0.05;
	bal_dis = amount;
	printf("\nBalance to dispense : $%1.2lf ",bal_dis,(float)bal_dis/100);
	//printf("$%1.2lf", (double)bal_dis / 100);
	//scanf("%1.2lf)", (double)bal_dis); 



	amount = amount * 100;

	toonies = amount / 200;
	remainder = amount;
	remainder = remainder % 200;
	printf("\n$2.00 Toonies  X %d (remaining: $%.2lf)\n", toonies, (float)remainder / 100);

	loonies = remainder / 100;
	remainder = remainder % 100;
	printf("$1.00 Loonies  X %d (remaining: $%.2lf)\n", loonies, (float)remainder / 100);

	quarters = remainder / 25;
	remainder = remainder % 25;
	printf("$0.25 Quarters X %d (remaining: $%.2lf)\n\n", quarters, (float)remainder / 100);
	printf("\nAll coins dispensed!");

	//printf("Machine error! Thank you for letting me keep $%.2lf!", (float)remainder / 100);

	return 0;
}

