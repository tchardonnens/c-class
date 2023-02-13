#include <stdio.h>

int main(int argc, char **argv)
{
	int age = 20;
	char name[20];
	scanf("%s", name);
	printf("Hello World!\nMy name is %s and I\'m %i.\n", name, age);

	// print my classes
	printf("Here are my classes:\n");
	char classes[3][20] = {"Microsystems", "WebDev", "Algorithmic"};
	for (int i=0; i<3; i++ ){
		printf("%s\n", classes[i]); 
	}

	// spell my name
	for (int i=0; i<sizeof(name); i++){
		printf("value: %c, reference: %p \n", name[i], &name[i]);
	}
	printf("\n");
	return 0;
}

