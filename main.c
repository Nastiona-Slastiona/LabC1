#include <stdio.h>
#include <stdlib.h>

void check (int a)
{
    if(a!=1 && a!=2)
    {
        printf ("Error. You entered wrong symbol\n");

    }

}

int main()
{
    int k, n, count, czislo, def,choice;

    printf("\nEnter k \nk:");
    while (scanf("%d",&k))
    {
        n = 1;
        count = 0;

        while (count < k)
        {
            czislo = n * n;
            printf("%d", czislo);
            for (int i = 0; czislo > 0; i++)
            {
                count++;
                czislo /= 10;
            }
            n++;
        }
        n--;
        def = count - k;
        n = n * n;
        for (int i = 0; i < def; i++)
        {
            n /= 10;
        }
        n %= 10;
        printf("\nAnswer: %d\n", n);


        printf ("Continue? 1.yes / 2.no\n");
        scanf("%d",&choice);
        check (choice);


        if (choice == 1)
        {
            printf("\nEnter k \nk:");

        }
        else
        {
            return 0;
        }

    }
    printf("Error. You've entered wrong symbol. Next time please use only digits\n");
    return 0;
}
