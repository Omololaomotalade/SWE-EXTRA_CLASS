#include <stdio.h>

int main(void)
{
	int cohort, num1, num2;
	char name[20], confirm[1];

	printf("Enter your first name: ");
	scanf("%s", name);
	printf("What cohort are you from?: ");
	scanf("%d", &cohort);

	if (cohort != 11)
	{
		printf("Sorry %s, this session is not for cohort %i\n", name, cohort);
	}
	else if (cohort == 11)
	{
		printf("Welcome %s, you may join the session now\n\n", name);
		puts("Do you want to perform addtion?");
		printf("('y' for yes or something else for no): ");
		scanf("%s", confirm);
		if (confirm[0] != 'y')
		{
			puts("Thank you for your time. Bye!");
			return (0);
		}
		printf("Enter the first number: ");
		scanf("%d", &num1);
		printf("Enter the second number: ");
		scanf("%d", &num2);

		printf("%d + %d = %d\n", num1, num2, num1+num2);
	}
	
	return (0);
}
