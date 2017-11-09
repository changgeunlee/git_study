#include <stdio.h>
#include <string.h>

int main(void)
{
	char num;
	int i,j=0;
	char nam[120]={0,};
	printf("2진수로 변환할 숫자 입력 : ");
	scanf("%d", &num);
	while(1){
		nam[i] = num % 2;
		if (num < 2){
			nam[i] = num;
			break;
		}	
		num = num/2;
		i++;
	}
	for( j=0; j<=i; j++){
		printf("%d",nam[i-j]);
	}
	printf("\n");
	return 0;
}
