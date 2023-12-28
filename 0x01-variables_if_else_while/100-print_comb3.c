#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    
    int j;
   int i = 0;

    for (j = 0; j <= 9; j++)
    {

	    for (; i <= 9; i++)

	    {
		    putchar('0' + i);
	    }

	    putchar ('0' + j);

	    if(j <= 9)
	    {
		    putchar(',');
		    putchar(' ');
	    }
    }
	  
    return 0;
}

