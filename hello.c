#include <stdio.h>
int main(int argc,char **argv)
{
	if (argc == 1)
		printf("hello\n");
	else
		printf("%s\n",argv[1]);
	return 0;
}
