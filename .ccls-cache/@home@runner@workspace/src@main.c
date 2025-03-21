#include <stdio.h>
#include "count_n.h"

int main(int argc, char *argv[]) {
		if (argc != 3) {
				printf("Usage: %s \"sentence1\" \"sentence2\"\n", argv[0]);
				return 1;
		}

		int count1 = count_n(argv[1]);
		int count2 = count_n(argv[2]);
		int total = count1 + count2;

		printf("Sentence 1: %s, 'н' count: %d\n", argv[1], count1);
		printf("Sentence 2: %s, 'н' count: %d\n", argv[2], count2);
		printf("Total 'н' count: %d\n", total);

		return 0;
}