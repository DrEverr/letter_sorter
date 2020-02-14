#pragma once
char a[100];
int put_size;

//own function put
void put(int index, char value, int do_count) {
	a[index] = value;
	if (do_count) put_size++;
}

//own function get
char get(int index) {
	return a[index];
}

//swap two letters
void swap(int i1, int i2) {
	char tmp = a[i1];
	a[i1] = a[i2];
	a[i2] = tmp;
}

//sorting algorythm
void sort_inc(int i1, int i2) {
	int a1 = 0, a2 = 0; //bools

	/* changing letters to small (for easier sorting) */
	if (a[i1] >= 65 || a[i1] <= 90) { a[i1] += ' '; a1 = 1; }
	if (a[i2] >= 65 || a[i2] <= 90) { a[i2] += ' '; a2 = 1; }

	/* sort in ascending order */
	if (a[i1] < a[i2]) {
		swap(i1, i2);
	}

	/* if the letter was changed to small, we change it back to big */
	if (a1) a[i1] -= ' ';
	if (a2) a[i2] -= ' ';
}