#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        printf("Height: ");
        height = get_int();
    }
    while (height < 0 || height > 23);

    for (int row = 0; row < height; row++)
    {
        for (int space = 1; space < height - row; space++)
        {
            printf(" ");
        }
        for (int hash = 0; hash < row + 1; hash++)
        {
            printf("#");
        }
        printf("  ");
        for (int hash = 0; hash < row + 1; hash++)
        {
            printf("#");
        }
        printf("\n");
    }
}