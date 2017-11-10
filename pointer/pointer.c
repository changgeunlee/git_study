#include <stdio.h>
#include <string.h>

void main(void)
{
	int i=0,j=0;	
	char var1=5,var2=10,var3=15;
	char *str = "Fucntion pointer"; /* 포인터 변수 */
	char array[] = "Function Pointer"; /* 배열 */
	char *ptr_array[3]={&var1,&var2,&var3}; /* 포인터 배열 */
	char array2[2][3] = {{10,20,30},{15,25,35}}; /* 2차원 배열 */
	char (*pArr)[3]=array2;  /* 배열 포인터 */

	// 포인터 주소를 이용한 출력
	for (i=0;i<strlen(str);i++){
		printf("%p, [%s]\n", str+i, (str+i));
	}
	// 배열을 이용한 출력
	for (i=0;i<strlen(array);i++){
		printf("%p, [%c]\n",&array[i], array[i]);
	}
	// 포인터 배열 이용한 출력
	for (i=0;i<sizeof(ptr_array)/sizeof(ptr_array[0]);i++){
		printf("%d\n",*ptr_array[i]);
	}
	// 배열 포인터 이용한 출력
	for (i=0; i < sizeof(array2)/sizeof(array2[0]);i++){
		for( j=0; j < sizeof(array2[0])/sizeof(char); j++){
			printf("array2[%d][%d]= %d\n",i,j,array2[i][j]);
		}
	}

}
