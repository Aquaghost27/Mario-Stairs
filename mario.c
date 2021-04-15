#include <cs50.h>
#include <stdio.h>

int get_int_between(void); //function

int main(void)
{
    
    int key = get_int_between();
    
    for (int height = 0; height < key; height++)
    {
        for (int spaces = key - height-2; spaces >= 0; spaces--) //spaces in front of pyramids
        {
            printf(" ");
        }
        for (int stack = 0; stack <= height; stack++) //left pyramid
        {
            printf("#");
        }
        printf("  ");
        for (int stack2 = 0; stack2 <= height; stack2++) //right pyramid
        {
            printf("#");
        }
        printf("\n");
    }
    
}


//integer between 1 and 8 function
int get_int_between(void)
{
    
    int n;
    do
    {
        n = get_int("height: ");
    }
    while (8 < n || n < 1);
    return n;
} 
