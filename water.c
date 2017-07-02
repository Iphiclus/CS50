#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("How many minutes was your shower?\n");
    int i = get_int();
    printf("Your shower was %i bottles of water\n", i * 12);
}
