#include <stdio.h>

main() {
	float Grade;
	
	printf("Enter your Grade: ");
	scanf("%f", &Grade);
	
	if (Grade >= 0.00 && Grade <= 72.99)
	printf("5.00");
	else if (Grade >= 73.00 && Grade <= 74.49)
	printf("4.00");
	else if (Grade >= 74.50 && Grade <= 76.49)
	printf("3.00");
	else if (Grade >= 76.50 && Grade <= 88.49)
	printf("2.00");
	else if (Grade >= 88.50 && Grade <= 100)
	printf("1.00");
}
