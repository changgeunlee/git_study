#include <stdio.h>

int main()
{
	int num=20;
	void *ptr;
	
	/*
	 * void 포인터는 어떠한 주소도 담을 수 있지만,
	 * 연산은 하지 못하는 단점이 있다.
	 */
	printf("%p\n",ptr);
	ptr = &num;
	printf("%p\n",ptr);




	return 0;
}
