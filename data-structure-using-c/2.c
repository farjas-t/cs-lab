//2- Reverse a String using Pointers
#include <stdio.h>
#include <string.h>
int main()
{
	char str[20], ch, *begin_ptr, *end_ptr;
	int len, i;
	printf("Enter a string : ");
	gets(str);
	len = strlen(str);
	begin_ptr = str;
	end_ptr = str + len - 1;
	for (i = 0; i < (len - 1) / 2; i++) {
		ch = *end_ptr;
		*end_ptr = *begin_ptr;
		*begin_ptr = ch;
		begin_ptr++;
		end_ptr--;
	}
	printf("Reverse of the string: %s\n", str);
}
