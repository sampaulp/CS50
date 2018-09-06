#include <cs50.h>
#include <stdio.h>

//main function
int main(void)
{
    //prompt user for the height
    int height = get_int("Height: ");

    //re promt if the input is not valid
    while (height > 23 || height < 0)
    {
        height = get_int("Height: ");
    }

    for (int i=1; i<=height; i++)
    {
        //formula
        int hashes = i+1;
        int spaces = height-i;
        int j =0;
        int k =0;

        //loop to print the spaces
        while (j<spaces)
        {
            printf(" ");
            j++;
        }

        //loop to print the hashes
        while (k<hashes)
        {
            printf("#");
            k++;
        }

        //print new line
        printf("\n");

    }

}
