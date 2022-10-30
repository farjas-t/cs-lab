//3-Implement Pattern matching algorithm.
#include <stdio.h>
#include <string.h>
int match(char [], char []);
int main() {
	char a[100], b[100];
	int pos;
	printf("Enter the string : ");
	gets(a);
	printf("Enter the string to find : ");
	gets(b);
	pos = match(a, b);
	if (pos != -1) {
		printf("Found at location: %d", pos + 1);
	}
	else {
		printf("Not found.");
	}
	return 0;
}
int match(char text[], char pat[]) {
	int c, d, e, tlen, plen, pos = -1;
	tlen    = strlen(text);
	plen = strlen(pat);
	if (plen > tlen) {
		return -1;
	}
	for (c = 0; c <= tlen - plen; c++) {
		pos = e = c;
		for (d = 0; d < plen; d++) {
			if (pat[d] == text[e])
				e++;
			else
				break;
		}
		if (d == plen)
			return pos;
	}
	return -1;
}
