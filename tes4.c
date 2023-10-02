#include <stdio.h>
#include <string.h>

int main () {
	char s [100];
	
	printf ("input : ");
	scanf ("%[^\n]",s);
	
	strrev (s);
	
	printf ("rotated :%s",s);
} 
