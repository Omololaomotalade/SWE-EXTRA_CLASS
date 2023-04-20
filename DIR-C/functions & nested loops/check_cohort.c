#include "header.h"

void check_cohort(void)
{
	char name;
	int cohort;

	printf("What is your name");

	scanf("%c", name);

	printf("What cohort are you", cohort);

	scanf("%d", cohort);

	if (cohort != 11)
	{
		printf("Do not have access to this cohort");
	}

	else
	{
		printf("Welcome to cohort %d %c",cohort,name);
	}
	

}


