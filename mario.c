#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;

    int hashes = 0;

        do
        {
            printf("How high do you want your pyramid?\n");
            height = get_int();
        }
    while (height > 23 || height < 0);

    int spaces = height;

    spaces = spaces - 1;
    for(int a = 1; a <= height; a++)
    {
        spaces = spaces -1;
        for(int j = 0; j <= spaces; j++)
            {
                printf(" ");
            }

            if (height > spaces)

            {
                    hashes = hashes + 1;
                    for(int n = 0; n <= hashes; n++)
                    {
                    printf("#");
                    }
            }

            printf("\n");
    }
}
