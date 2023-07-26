#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float f(float x)
{
	return pow(x,3) - (2*x) - 5;
}
int main()
{
	float x1, x2, x0, error = 0.0001;
	int i = 0;
	printf("Enter two initial guess: ");
	scanf("%f%f",&x1, &x2);
	if(f(x1)*f(x2)>0)
	{
		printf("Wrong Initial Guess!!");
		exit(0);
	}
	else
	{
		do
		{
			x0 = (x1+x2)/2;
			if(f(x1)*f(x0)>0)
			{
				x1 = x0;
			}
			else
			{
				x2 = x0;
			}
			i++;
		}while(fabs(f(x0))>error);
		printf("No. of Iterations = %d\n", i);
		printf("Root = %f", x0);
	}
}
