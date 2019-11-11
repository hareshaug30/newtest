#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define numbytes (1 << 30)
#define N 10000L
int main()
{
	int *blocks[N];
	int i;
	while(1) {
		for (i = 0; i < N; i++) {
			blocks[i] = malloc(numbytes);
			if(blocks[i] == NULL) {
				printf("malloc refused at %d\n",i);
				return 0;
			}
		}
		printf("Allocated %ld blocks\n",N);
		for (i = 0; i < N; i++) {
			memset(blocks[i],1,numbytes);
			printf("Written to %d GB\n",i);
		}
	}
}

