//------ Copyright (C) 2017-2018 "NNmJYwg" -------//
//------ GPL V3 -------//
#include <stdio.h>

int main(int argc, char *argv[])
{
	printf("There are %d arguments\n", argc);
	for (int count = 0; count < argc; ++count) {
		printf("%d\t%s\n", count, argv[count]);
	}
	return 0;
}
