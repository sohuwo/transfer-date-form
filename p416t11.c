//p416 title 11
//input 9-13-2010 or 9/13/2010, output September 13, 2010

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
	char date[] = "September 13, 2010 january";
	char *mon[] = { 0,"January","February","March","April","May",\
		"June","July","August","September","October","November","December" };
	int month, day, year;
	if (argc != 2)
	{
		fprintf(stderr, "usage: translate 9-13-2010(or 9/13/2010)\n");
		exit(EXIT_FAILURE);
	}
	if (sscanf(argv[1], "%d-%d-%d", &month, &day, &year) == 3)
		printf("%s %d, %d\n", mon[month], day, year);
	else if (sscanf(argv[1], "%d/%d/%d", &month, &day, &year) == 3)
		printf("%s %d, %d\n", mon[month], day, year);
	else
		printf("Date not in the proper form.\n");
	return 0;
}
