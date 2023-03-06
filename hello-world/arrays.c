#include <stdio.h>

int main(int argc, char **argv)
{
	int array1[3];
	char array2[20];

	scanf("%d", &array1[0]);
	scanf("%d", &array1[1]);
	scanf("%d", &array1[2]);

	scanf("%s", array2);

	printf("Here are your values: %d, %d, %d\n", array1[0], array1[1], array1[2]);
	printf("Here is your text: %s\n", array2);
}
