/* Letter sorter
*	Write a sentence and end with '.' algorythm will sort every letter in this sentence.
*/

#include <stdio.h>
#include "ArrManager.h"

int main() {
	char c;
	printf("Write a sentence and end with '.' algorythm will sort every letter in this sentence.\n");
	//getting sentence
	while (1) {
		c = getchar();
		if (c == '.') break;
		put(put_size, c, 1);
	}

	//sorting letters
	for (int i = 0; i <= put_size; i++)
		for (int j = 0; j <= put_size; j++)
			sort_inc(i, j);

	//printing answer
	for (int i = 1; i <= put_size; i++)
		printf("%c", get(i));

	return 0;
} 