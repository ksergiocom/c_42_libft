#include<stdio.h>
#include<stdlib.h>
#include"ft_lib.h"

int ft_atoi(const char *s){

	char signo = 0;
	int res = 0;

	while(*s){
		if(ft_isdigit(*s)){
			res = res * 10 + *s - 48;
		}else{
			if(signo)
				return res;
			else if(*s == '-'){
				signo = '-';
			}
			else if(*s == '+'){
				signo = '+';
			}
			else{
				if(signo == '-')
					res *= -1;
				return res;
			}
		}
		s++;
	}

	if(signo == '-')
		res *= -1;

	return res;
}

void test_atoi(const char *s){
	printf("---------\n");
	printf("String: %s\n", s);
	printf("Mi atoi: %d\n", ft_atoi(s));
	printf("Original atoi:%d\n", atoi(s));
	printf("---------\n");
}

int main(){

	test_atoi("123");
	test_atoi("123456789123456789");
	test_atoi("-123");
	test_atoi("+123");
	test_atoi("--123");
	test_atoi("---123");
	test_atoi("+123");
	test_atoi("++123");
	test_atoi("123asd123");
	test_atoi("asd123");
	test_atoi("123abc");

	return 0;
}

