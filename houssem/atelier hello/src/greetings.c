#include <string.h>
#include "greetings.h"

void sayHello(char nom[],char hello[])
{
	strcpy(hello, "Hello ");
	strcat(hello, nom);
}
