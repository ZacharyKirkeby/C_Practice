#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a;
    int b;
    scanf("%d %d",&a, &b);
    float aa;
    float bb;
    scanf("%f %f", &aa, &bb);
    printf("%d ", a + b);
    printf("%d\n", a - b);
    printf("%.1f ", aa + bb);
    printf("%.1f", aa - bb);
    
}
