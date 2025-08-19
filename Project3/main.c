#include "utility.h"
int main() {
	sl();
	int a[3] = { 123,23,43 };
	for (int i = 0;i < ASIZE(a);i++)
		printf("%d ", a[i]);
}