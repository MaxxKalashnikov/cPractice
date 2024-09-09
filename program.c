#include <stdio.h>

int main(){
	printf("The program calculates the total hours worked during\na specific period and the average length of a day.\n");
	int days,i ,j;
	printf("\n");
	printf("How many days:");
	scanf("%d", &days);
	float hours, totalHours, averageHours;
	
	float workLoad[30];
	
	for(i = 0; i < days; i++){
    hours = 0;
		printf("Enter the working hours for day %d:", i+1);
		scanf("%f", &hours);
		workLoad[i] = hours;
	}
	
	printf("\n");
	totalHours = 0;
	for(j = 0; j < days; j++){
		totalHours += workLoad[j];
	}
	averageHours = totalHours / days;
	printf("Total hours worked: %.1f\nAverage length of day: %.1f\n", totalHours, averageHours);
	printf("Hours entered: ");
	for(j = 0; j < days; j++){
		printf("%.1f ", workLoad[j]);
	}
  return 0;
}