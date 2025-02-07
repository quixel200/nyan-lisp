#include <stdio.h>
#include <stdlib.h>

#include <editline/readline.h>

int main(int argc, char **argv){
    puts("Nyan Lisp Version -1\n");
    puts("press ctrl+C to Exit\n");

    while(1){
        char *input = readline("nyan> ");

        add_history(input);

        printf("did you just say %s\n",input);
        free(input);
    }
    return 0;
}
