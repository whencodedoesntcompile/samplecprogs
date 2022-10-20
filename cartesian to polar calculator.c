
// Program to calculate Cartesian co-ordinates (x,y) to Polar (p1,pf)
//p1= sqrt(x*x+y*y)
//p2=tan inverse(y/x)


#include<stdio.h>
#include <math.h>


int main()
{
    float x,y;
    float p1,p2, pf;
    printf("===================================\n");
    printf("Cartesian to Polar co-ordinates calculator\n");
    printf("===================================\n");
    printf("Enter the X value\n");
    printf("===================================\n");
    scanf("%f", &x);
    printf("===================================\n");
    printf("Enter the Y value\n");
    scanf("%f", &y);
    
    p1=sqrt(x*x+y*y);
    p2=atan(y/x);
    pf=p2*57.2957795; //convert values from radians to degrees as tan inverse returns values in radians
    
    printf("Polar co-ordinates are:\n");
    printf("===================================\n");
    printf("%f\n", p1);
    printf("%f\n", pf);
    
    
    
    return 0;
}
