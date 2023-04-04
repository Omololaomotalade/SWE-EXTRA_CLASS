#include <stdio.h>

int main(void)
{
        const int salary = 30;
        int whole = 9;
        char alpha = '9';
        float deci = 9.0;

        printf("whole contains:\t%d\n", whole);
        printf("alpha contains:\t%c\n", alpha);
        printf("deci contains:\t%.1f\n", deci);

        whole = 10;
        printf("whole contains:\t%d\n", whole);
        /* reassigning a value to salary, a constant */
        //salary = 20;

        return (0);
}
