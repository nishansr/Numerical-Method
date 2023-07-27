#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float f(float x)
{
    return pow(x, 3) - (2 * x) - 5;
}
int main()
{
    float x1, x2, x0, error = 0.0001, a, b;
    int i = 0;
    printf("Enter two initial guess: ");
    scanf("%f%f", &x1, &x2);
    if (f(x1) < 0)
    {

        a = x1;
        b = x2;
    }
    else
    {
        do
        {
            a = x2;
            b = x1;
            x0 = ((a * f(b)) - (b * f(a))) / (f(b) - f(a));
            if (f(x1) * f(x0) > 0)
            {
                x1 = x2;
                x2 = x0;
            }
            i++;
        } while (fabs((b - a) / b) > error);
        printf("No. of Iterations = %d\n", i);
        printf("Root = %f", x0);
    }
}
