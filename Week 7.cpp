#include <stdio.h>
#include <iostream>

double calculateArea(double height, double width);
double calculatePaint(double area, int numCoats, double m2PerLitre);

int main()
{
	double wallHeight = 0;
	double wallWidth = 0;
	double wallArea = 0;
	int doors = 0;
	int doorArea = 0;
	double windowHeight = 0;
	double windowWidth = 0;
	double windowArea = 0;
	double coverage = 0;
	int coats;
	double paint;
	int more = 0;
	double totalArea = wallArea - windowArea - doorArea;

	do
	{
		printf("Enter Wall height (metres): ");
		scanf_s(" %lf", &wallHeight);
		printf("\nEnter Wall width (metres): ");
		scanf_s(" %lf", &wallWidth);
		wallArea = wallArea + calculateArea(wallHeight, wallWidth);
		printf("\nTotal wall area = %lf", wallArea);
		printf("\nMore walls? (1=yes/0=no): ");
		scanf_s(" %d", &more);
	} while (more == 1);


	printf("Are there any windows in the room? (1=yes/0=no): ");
	scanf_s(" %d", &more);
	do
	{
		printf("Enter Window height (metres): ");
		scanf_s(" %lf", &windowHeight);
		printf("\nEnter Window width (metres): ");
		scanf_s(" %lf", &windowWidth);
		windowArea = windowArea + calculateArea(windowHeight, windowWidth);
		printf("\nTotal window area = %lf", windowArea);
		printf("\nMore windows? (1=yes/0=no):");
		scanf_s(" %d", &more);

	} while (more == 1);

	printf("\n\nHow many doors are there in the room? (Count double doors as 2): ");
	scanf_s(" %d", &doors);
	doorArea = doors * 2;
	printf("\n\nTotal wall area - doors and windows = %lf",totalArea);
	printf("\n\nWhat is the coverage in m2 of your paint?: ");
	scanf_s(" %lf", &coverage);
	printf("\nHow many coats do you want?: ");
	scanf_s(" %d", &coats);
	paint = calculatePaint(totalArea, coats, coverage);
	printf("\n\nPaint needed = %lf\n\n", paint);
}



double calculateArea(double height, double width)
{
	return height*width;
}


double calculatePaint(double area, int numCoats, double m2PerLitre)
{
	return (area * numCoats) / (m2PerLitre);
}