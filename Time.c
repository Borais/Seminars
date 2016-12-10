#include<stdlib.h>
#include<stdio.h>
int main()
{
	int sec, min, hours;
	scanf("%d", &sec);
	min=sec/60;
	hours=min/60;
	printf("hours=%d min=%d sec=%d", hours, min, sec);
	return 0;
}
