#include<stddef.h>

int strncmp(const char *s1, const char *s2, size_t n)
{
	while(*s1 && *s2 && n){
		if(*s1 != *s2){
			return *s1-*s2;
		}
	}

	return 0;
}


int main()
{
	

	return 0;
}