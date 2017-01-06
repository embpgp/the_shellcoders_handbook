#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*I have changed the code,so let it work*/

/*In order to implement arbitrary address write I need some local vars and strcpy them.*/
/*But I don't need overflow it*/

int main( int argc, char *argv[] )
{
	char evil[128] = {0};
	strcpy(evil, argv[1]);
	printf( argv[1]);
	return 0;
}
