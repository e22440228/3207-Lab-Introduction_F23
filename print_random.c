#include <stdio.h>
#include <stdlib.h>
#include <time.h>


char randchar(){
	int max_num = 26;
	int min_num = 0;
    	char ranChar = rand()%(max_num - min_num) + 65;
	return ranChar;
}

int main()
{
	int a;

	/* seed the randomizer */
	srand( (unsigned)time(NULL) );

	printf("Today's random word: ");
	for(a=0;a<7;a++)
		putchar( randchar() );
	putchar('\n');

	return(0);
}

