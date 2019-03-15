#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{

    float change;
    do
    {
    printf("How much change is owed?\n");
    change = get_float();
    }
    while (change < 0);

    int centremain = round(change * 100);
    int counter = 0;


    while (centremain >= 25)
    {
        counter++;
        centremain = centremain - 25;
    }

    while (centremain  >= 10)
    {
        counter++;
        centremain = centremain - 10;
    }

    while (centremain >= 5)
    {
        counter++;
        centremain = centremain - 5;
    }

    while (centremain >= 1)
    {
        counter++;
        centremain = centremain - 1;
    }

    printf("%i\n", counter);


}