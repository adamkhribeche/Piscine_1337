#include <stdio.h>
#include <string.h>

int unsigned ft_strlcat(char *d, char *s, int unsigned n);

int main()
{
	char a[18]="bonjour";
	char b[]="adam";
	unsigned long  s;
	printf("%u\n", ft_strlcat(a, b, 9));
	printf("%lu", strlcat(a, b, 9));
	return 0;
}
