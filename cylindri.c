#include <math.h>
#include "cylindri.h"
double volume_cyl(double r,double h)
{
    return r*r* pi*h;
}
 double area_cyl(double r,double h)
 {
     double area=2*r*pi*h+pi*r*r*2;
     return area;

 }

 void read_cyl(double* x,double* y, double* z,double* r,double* h)
 {
     puts("shemoitanet fudzis creciris centris koordinatebi");
     puts("x,y,z, mdzimit gamoyofili ");
     scanf("%lf,%lf,%lf",x,y,z);
     puts("cakitxul iqna:");
     printf("x=%lg, y=%lg, z=%lg\n",*x,*y,*z);
     ////////////////////////////////////////
     puts("shemoitanet radiusi da simagle");
     puts("r,h mdzimit gamoyofili ");
     scanf("%lf,%lf",r,h);
     puts("cakitxul iqna:");
     printf("r=%lg, h=%lg\n",*r,*h);

 }
 void print_cyl_data(double * area, double * vol)
 {
     puts("cylindris farti da moculoba:");
     printf("area=%lg, volume=%lg\n",*area,*vol);

 }

