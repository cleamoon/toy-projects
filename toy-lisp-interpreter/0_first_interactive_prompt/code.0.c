#include <stdio.h>

static char input[2048];

int main(int argc, char** argv) {
	puts("Very first interactive prompt\n");
	puts("Press Ctrl+c to Exit\n");

	while (1) {
		fputs("lisp> ", stdout);
		fgets(input, 2048, stdin);
		printf("repl> %s\n", input);
	}

	return 0;
}