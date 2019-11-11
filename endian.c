#if 1
#include <stdio.h>

int main()
{
	int val = 0x72401;
	char *ptr;
	ptr = (char*)&val;
	if (*ptr == 0x01)
		printf("Litte endian\n");
	else
		printf("Big endian\n");
}
#endif


#if 0
/* 
   Write a C program to find out if the underlying 
   architecture is little endian or big endian. 
 */
 
#include <stdio.h>
int main ()
{
  unsigned int x = 0x76543210;
  char *c = (char*) &x;
 
  printf ("*c is: 0x%x\n", *c);
  if (*c == 0x10)
  {
    printf ("Underlying architecture is little endian. \n");
  }
  else
  {
     printf ("Underlying architecture is big endian. \n");
  }
 
  return 0;
}

#endif

