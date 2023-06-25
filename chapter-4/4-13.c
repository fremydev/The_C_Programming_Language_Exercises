#include <stddef.h>
#include <stdio.h>

void reverse(char str[], int begin, int end);
void swap(char arr[], size_t i, size_t j);

int main(void) {
	return 0;
}

void reverse(char str[], int begin, int end) {
	if (begin > end) return;

	swap(str, begin, end);
	reverse(str, ++begin, --end);
}

void swap(char v[], size_t i, size_t j) {
	char tmp;

	tmp = v[i];
	v[i] = v[j];
	v[j] = tmp;
}
