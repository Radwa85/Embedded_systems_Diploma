/*
 * main.c
 *
 *  Created on: Dec 8, 2023
 *      Author: MF
 */


#include "stdio.h"
void main ()
{
float x,y,z;

printf("Enter two numbers:\n");
fflush(stdin);  fflush(stdout);
scanf("%f%f",&x,&y);
z=x*y;
printf("Product:%f",z);
}
