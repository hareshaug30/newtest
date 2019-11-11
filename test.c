#if 0
#include <stdio.h>
#include "hello.h"
/**
 * main - Entry point of the program
 *
 * Return: 0 every time.
 */

int factorial(int num)
{
	if (num == 0)
		return 1;
	else
		return num * factorial(num-1);		
}

int main(void)
{
	int a = 0;
	printf("Enter number:\n");
	scanf("%d",&a);
	printf("factorial = %d\n",factorial(a));
	return 0;
}

// C program to generate fibonacci series upto n value

#include<stdio.h>
int main()
{
int sum = 0, n;
int a = 0;
int b = 1;
printf("Enter the nth value: ");
scanf("%d", &n);
printf("Fibonacci series: ");
while(sum <= n)
{
printf("%d ", sum);
a = b; // swap elements
b = sum;
sum = a + b; // next term is the sum of the last two terms 
}
return 0;
}

#include <stdio.h>
#include <math.h>

int main()
{
	int num,sum = 0,temp,digit = 0,n=0;
	printf("Enter the number:\n");
	scanf("%d",&num);
	temp = num;
	while (temp != 0) {
		temp = temp/10;
		++n;
	}
	temp = num;
	while(temp != 0) {
		digit = temp%10;
		sum = sum + pow(digit,n);
		temp = temp/10;
	}
	if (sum == num)
		printf("Number is Armstrong\n");
	else
		printf("It is not armstrong\n");

}
#endif

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int num=0,temp,n = 0,digit,i = 0,newnum = 0;
	int *ptr = NULL;

	printf("Enter the number\n");
	scanf("%d",&num);

	temp = num;

	while (temp != 0) {
		temp = temp/10;
		++n;
	}
	ptr = (int*)malloc(n*sizeof(int));

	temp = num;

	while (temp != 0) {
		digit = temp%10;
		if (digit == 0)
			ptr[i] = 1;
		else
			ptr[i] = digit;
		i++; temp = temp/10;
	}

	for(i = 0; i < n; i++) {
		newnum = newnum + (ptr[i] * pow(10,i));
	}

	printf("changed number = %d\n",newnum);
}
