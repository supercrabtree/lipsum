#include <stdio.h>
#include <stdlib.h>

char loremIpsum[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur.Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.";

void usage() {
	fprintf(stderr, "usage: lorem [numwords]\n");
	exit(EXIT_FAILURE);
}

int isInt(char *string) {
	char c;
	int i = 0;
	while ((c = string[i]) != '\0') {
		if (c < 47 || c > 57) {
			return 0;
		}
		i++;
	}
	return 1;
}

int main(int argc, char **argv) {
	if (argc == 1) {
		printf("%s", loremIpsum);
		exit(EXIT_SUCCESS);
	}

	if (argc > 2) {
		usage();
	}

	if (!isInt(argv[1])) {
		usage();
	}
}
