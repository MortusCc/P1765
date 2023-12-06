#include "phone.h"
int main()
{
	char str[LEN + 1];
	scanf("%[^\n]", str);
	int count = CountPhone(str);
	printf("%d", count);
	return 0;
}