#include <stdio.h>

int main()
{
	int min,max,num,flag,i;
	printf("Enter the range min and max\n");
	scanf("%d%d",&min,&max);
	for (num=min; num <= max; num++) {
		flag = 0;
		for(i=2; i<=num/2; i++) {
			if(num % i == 0) {
				flag = 1;
				break;
			}
		}
		if (flag == 0)
			printf("%d\t",num);
	}
	printf("\n");
}

