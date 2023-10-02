#include <stdio.h>

int main () {
	int a[10];
	int i;
	float max,min,total,avg;
	
	printf ("Enter 10 integers values :\n");
	
	for (i=0;i <10;i++) {
		printf ("Enter integer %d :",i+1);
		scanf ("%d",&a[i]);
		total = total + a[i]; 
		
	}
	avg = total /10;
	max = min = a [0];
	for (i = 1; i < 10;i++) {
		if (a[i]>max) {
			max = a[i];
		}
		if (a[i]<min) {
			min = a[i];
		}
	}
	printf ("max value : %.2f\n",max);
	printf ("min value : %.2f\n",min);
	printf ("avg value : %.2f\n",avg);
}
