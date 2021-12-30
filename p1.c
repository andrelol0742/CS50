#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

int main(void)
{
    menu:

    printf("\nA Simple Yet Effective Comparator\n\n");
    printf("ver1.0\n\n");
    printf("1.  compare integers\n");
    printf("2.  compare real numbers\n");
    printf("3.  credits\n\n");

    int opt = get_int("select an option:\t");

    if (opt==1)
    {
        int x = get_int("\ntype an integer:\n");
        int y = get_int("\ntype another integer:\n");

        if (x<y)
        {
            printf("\n%i is less than %i\n", x, y);
        }
        else if (x>y)
        {
            printf("\n%i is grater than %i\n", x, y);
        }
        else
        {
            printf("\n%i is equal to %i\n", x, y);
        }

        AOQ:

        printf("\n");

        int r = get_int("Would you like to perfom another comparation? (1/0):\t");

            if (r==1)
            {
                goto menu;
            }

            else if (r==0)
            {
                exit(0);
            }

            else
            {
                printf("Invalid input\n");
                goto AOQ;
            }
    }

    else if (opt==2)
    {
        float x = get_float("\ntype a real number:\n");
        float y = get_float("\ntype another real number:\n");

        if (x<y)
        {
            printf("\n%f is less than %f\n", x, y);
        }
        else if (x>y)
        {
            printf("\n%f is grater than %f\n", x, y);
        }

        else
        {
            printf("\n%f is equal to %f\n", x, y);
        }

        goto AOQ;
    }

    else if (opt==3)
    {
        printf("\nASYEC version 1.0\n\nby André Tregear\n");

        goto AOQ;
    }

    else
    {
        printf("Invalid input\n");
        goto menu;
    }


}


