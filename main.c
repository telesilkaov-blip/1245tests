#define _USE_MATH_DEFINES
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<locale.h>
#include <time.h>
#include <stdlib.h>

{//#1
int a[n1], i ;
double  sr = 0, k = 0;
setlocale(LC_ALL, "rus");
srand(time(NULL));
for (i = 0; i < n1; i++)
{
	a[i] = rand()%10;
	printf("%i\t", a[i]);
}
for (i = 0; i < n2; i++)
	sr += a[i];
sr = sr / n2;
printf("\nСреднее арифметическое = %.2lf", sr);
_getch();
}
