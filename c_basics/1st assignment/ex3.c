/*
 * main.c
 *
 *  Created on: Dec 8, 2023
 *      Author: MF
 */


#include "stdio.h"
void main ()
{
int x,y;
int sum=0;
printf("Enter two integers:\n");
fflush(stdin);  fflush(stdout);
scanf("%d%D",&x,&y);
sum=x+y;
printf("sum:%d",sum);
}
