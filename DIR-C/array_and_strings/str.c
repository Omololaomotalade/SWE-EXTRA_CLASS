#include <stdio.h>
#include <stdlib.h>

void line(void); //prototype
int main(void)
{
    char *chr = "Lola";
    // char chr[] == char *chr
    printf("chr is: %s\n", chr);

    /* An array of integers */
    int arr[5] = {2, 3, 5, 2, 1};

    /* An array of characters */
    char chr2[5] = {'L', 'o', 'l', 'a', '\0'};
    printf("chr2 is: %s\n", chr2);

    int n = 0;

    /* Getting each element of chr2 using a while loop */
    line();
    while (chr2[n] != '\0')
    {
	printf("chr2[%d] is: %c\n", n, chr2[n]);
	n++;
    }

    /* An array of strings */
    char chr3[2][6] = {"Lola", "Topman"};
    /* Getting each element of chr2 using a while loop */
    n = 0;
    line();
    while (n < 2)
    {
	printf("chr3[%d] is: %s\n", n, chr3[n]);
	n++;
    }

    return (0);
}

void line(void)
{
    puts("-----\t-----\t-----");
}
