#include <stdio.h>
#include <string.h>

#define PAGE_SHIFT 13

int main(void)
{
	char bit=1;
#if 1
	printf("%d\n",bit << 1); 
	printf("%d\n",bit << 2); 
	printf("%d\n",bit << 3); 
	printf("%d\n",bit << 4);
	printf("%d\n",bit << ((PAGE_SHIFT-3) >> 10));
#endif
	return 0;
}
