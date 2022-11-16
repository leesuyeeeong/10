#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	int grade[5];

	for (i=0;i<5;i++)
	{
		printf("grade[%i] = ", i);
		scanf("%d", &grade[i]);
	}
	
	return 0;
}

