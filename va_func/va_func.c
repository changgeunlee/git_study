#include <stdio.h>
#include <stdarg.h>
#include <string.h>

#define TYPE_F 1
#define TYPE_S 0
#define BUFF 128

void va_func(int i, char *s_str, ...)
{
	va_list ap; /* 각 인자의 시작주소를 가르킨다. */
	int ren=0;
	int num=0;
	char *s_ptr;
	char *d_ptr;
	char buff[BUFF];
	memset(buff, 0x00, sizeof(BUFF));

	va_start(ap,s_str);  /* va_list에게 가변 인자 중 첫번째 인자를 알려준다. */

	if ( i == 1 ){
		s_ptr = va_arg(ap, char *); /* va_list의 포인터를 다음 가변 인자로 이동 시켜준다. */
		d_ptr = va_arg(ap, char *); /* va_list의 포인터를 다음 가변 인자로 이동 시켜준다. */
		ren += sprintf(buff+ren,"%d,",i); 
		ren += sprintf(buff+ren,"%s,",s_str); 
		ren += sprintf(buff+ren,"%s,",s_ptr); 
		ren += sprintf(buff+ren,"%s",d_ptr); 
	}
#if 1
	else{
		num = va_arg(ap,int);
		ren += sprintf(buff+ren,"%d,",i);	
		ren += sprintf(buff+ren,"%s,",s_str); 
		ren += sprintf(buff+ren,"%d",num); 
	}
#endif
	printf("%s\n",buff);

	va_end(ap); /* 가변인자 NULL 반환 */
}

void main()
{
	va_func(TYPE_F,"lee", "chang","geun");	
	va_func(TYPE_S,"kim", 1234);	
}
