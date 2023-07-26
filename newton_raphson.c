#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float f(float x)
{
	return pow(x,3) - (2*x) - 5;
}
float fd(float x)
{
	return 3*pow(x, 2) - 2;
}
int main()
{
	float x1, x0, error = 0.0001;
	int i = 0;
	printf("Enter initial guess: ");
	scanf("%f",&x1);
		do
		{
			x0 = x1 - (f(x1)/fd(x1));
			{
				x1 = x0;
			}
			i++;
		}while(fabs(f(x0))>error);
		printf("No. of Iterations = %d\n", i);
		printf("Root = %f", x0);
}
