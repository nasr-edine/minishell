#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//https://github.com/brenns10/lsh/blob/master/src/main.c
// https://www.rosipov.com/blog/c-strtok-usage-example/
// https://brennan.io/2015/01/16/write-a-shell-in-c/
// https://cdn.intra.42.fr/pdf/pdf/5999/minishell.fr.pdf
void split_line(char *str)
{

    char *token;
    char **tokens;

    tokens = (char **)malloc(sizeof(char *) * 64);
	token = strtok(str, "-");
	while (token != NULL) 
    { 
		printf("[%s]\n", token); 
		token = strtok(NULL, "-"); 
	} 
    // return value;
}

char *read_line()
{
    char *str;
    str = malloc(sizeof(char) * 1024);

    char c;
    int i = 0;

    c = getchar();
    while (c != '\n')
    {
        str[i] = c;
        c = getchar();
        // printf("(%c)\n", c);
        i++;
    }
    str[i] = 0;
    return str;
}

int main(int argc, char const *argv[])
{
    char *s = read_line();
    printf("before split: [%s]\n",s);
    split_line(s);
    return EXIT_SUCCESS;
}











