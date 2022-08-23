#include <stdio.h>

void mycommand()
{
	printf("This is the command I want to execute \n");
}
int main()
{
	mycommand("\n");
	mycommand("\n");
	mycommand("\n");
	return(0);
}	
