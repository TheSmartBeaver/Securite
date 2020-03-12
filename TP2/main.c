#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void) {
	char password[] = "einstein";
	char input[10];

	printf("Please enter the password :\n");
	gets(input);

	if( strncmp(password, input, 10) == 0 )
		printf("Success !\n");
	else
		printf("Failure.\n");

    printf("%s\n",password);
    printf("%s\n",input);

	return 0;
}
