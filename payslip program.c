/*  Salary payment
    In GITONGA'S FACTORY,
    created by Michael Murimi
    On 14TH July 202,
*/
#include <stdio.h>

int main() {
	int totalhoursWorked = 40;
	int kraPin, employmentNo, hoursWorked, normalPay, overtimePay, taxPaid, netIncome;
	char name[100];

	printf("Welcome to Gitonga's Factory\n");

	printf("Enter your name: ");
	scanf("%s", &name);

	printf("Enter your employee number: ");
	scanf("%d", &employmentNo);

	printf("Enter your KRA pin: ");
	scanf("%d", &kraPin);

	printf(" Enter number of hours worked: ");
	scanf(" %d", &hoursWorked);


	normalPay = 1000 * totalhoursWorked;
	overtimePay = (hoursWorked - totalhoursWorked) * 1500;
	taxPaid = normalPay * 30/100;
	netIncome = (normalPay - taxPaid) + overtimePay;

	printf("normalPay: %d\n", normalPay);
	printf("overtimePay: %d\n", overtimePay);
	printf("taxPaid: %d\n", taxPaid);
	printf("netIncome: %d\n", netIncome);

	return 0;
}
