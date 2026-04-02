#include <stdio.h>
int main()
{
    int a[100], i, choice, n = 0; // user input is n
    int eent = 0;

    do
    {
        printf("1.Enter the size of the array:\n");
        printf("2.Enter the array elementes:\n");
        printf("3.Display\n");

        printf("Enter your choice:");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the size of array:\n");
            scanf("%d", &n);
            eent = 0;
            break;

        case 2:
            if (n == 0)
            {
                printf("Enter the choice 1 first\n");
            }
            else
            {
                printf("Enter the array elements:\n");

                for (i = 0; i < n; i++)
                {
                    scanf("%d", &a[i]);
                }
                eent = 1;
            }
            break;
        case 3:

            if (eent == 0)
            {
                printf("Enter the choice 1 and 2 first\n");
            }

            else
            {
                printf("The array elements are :\n");
            choice++;
            for (i = 0; i < n; i++)
            {
                printf("%d ", a[i]);
            }
            printf("\n");

                int temp, j;

                /* Ascending Sort */
                for (i = 0; i < n - 1; i++)
                {
                    for (j = 0; j < n - i - 1; j++)
                    {
                        if (a[j] > a[j + 1])
                        {
                            temp = a[j];
                            a[j] = a[j + 1];
                            a[j + 1] = temp;
                        }
                    }
                }

                printf("Ascending Order:\n");
                for (i = 0; i < n; i++)
                {
                    printf("%d ", a[i]);
                }

                printf("\n");

                /* Descending Sort */
                for (i = 0; i < n - 1; i++)
                {
                    for (j = 0; j < n - i - 1; j++)
                    {
                        if (a[j] < a[j + 1])
                        {
                            temp = a[j];
                            a[j] = a[j + 1];
                            a[j + 1] = temp;
                        }
                    }
                }

                printf("Descending Order:\n");
                for (i = 0; i < n; i++)
                {
                    printf("%d ", a[i]);
                }
            }
            break;
        default:
            printf("Invalid Input");
        }
    } while (choice != 4);
    return 0;
}