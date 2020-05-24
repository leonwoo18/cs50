#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int price = get_float("what's the price?\n");
    printf("you tatal is %f.\n ", price*1.0625);
}