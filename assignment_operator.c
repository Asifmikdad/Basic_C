#include <stdio.h>
int main(int argc, char const *argv[])
{
    int price;

    price = 20;
    printf("Price = %d\n", price);

    // price = price + 10;
    price += 10;
    printf("Price = %d\n", price);
    // price = price - 10;
    price -= 10;
    printf("Price = %d\n", price);
    // price = price * 10;
    price *= 10;
    printf("Price = %d\n", price);
    // price = price / 10;
    price /= 10;
    printf("Price = %d", price);
    return 0;
}

// price++; means inceasing 1;
// price--; means decreading 