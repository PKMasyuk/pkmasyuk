#include <stdio.h>
#include <cs50.h>
int main (void)
{
    int h;
    //ask user to input height until he does it right
    do
    {
        printf ("Height (no less 0, no greater 23): ");
        h = get_int();
    }
    while (h < 0 || h > 23);
        
        int line, sim; //declare variables for the line number & for the position number in the line
        //external loop for line changing
        for(line = 0; line < h; line++)
         {
             //Internal loop for changing position in the line
             for(sim = 0; sim < h + 1; sim++)
             {
                 if(sim < h - 1 - line)
                 printf(" ");
                 else
                 printf("#");
                 
             }
        printf("\n");
        }
   }
    