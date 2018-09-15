#include <stdio.h>
#include <stdlib.h>

#include <editline/readline.h>
#include <editline/history.h>

int main(int argc, char** argv) {
	puts("Very first interactive prompt\n");
	puts("Press Ctrl+c to Exit\n");

	while (1) {
		char* input = readline("lisp> ");
		add_history(input);
		printf("repl> %s\n\n", input);
		free(input);
	}

	return 0;
}