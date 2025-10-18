#include <stdio.h>
#include <ctype.h> // Para isprint()

void	check_original_atoi(const char *s){
	printf("---------\n");
	printf("String: %s\n", s);
	printf("Mi atoi: %d\n", ft_atoi(s));
	printf("Original atoi:%d\n", atoi(s));
	printf("---------\n");
}

void	test_ft_atoi(){
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
}

void	test_ft_bzero()
{
	char str[] = "Hola que tal todo, estoy probando";
	printf("str original: %s\n", str);
	ft_bzero(str, 10);
	printf("str bzero: %s\n", str);
}

void	test_ft_calloc(){	
	void *p = calloc(23, sizeof(double));

	free(p);
}


void	test_ft_isalnum()
{
	char c1 = 'A';
	char c2 = 'z';
	char c3 = '9';
	char c4 = '%';
	
	printf("%c es alfanum: %d\n", c1, ft_isalnum(c1));
	printf("%c es alfanum: %d\n", c2, ft_isalnum(c2));
	printf("%c es alfanum: %d\n", c3, ft_isalnum(c3));
	printf("%c es alfanum: %d\n", c4, ft_isalnum(c4));
}


void	test_ft_isalpha()
{
	char c1 = 'A';
	char c2 = 'z';
	char c3 = '9';
	char c4 = '%';
	
	printf("%c es alfa: %d\n", c1, ft_isalpha(c1));
	printf("%c es alfa: %d\n", c2, ft_isalpha(c2));
	printf("%c es alfa: %d\n", c3, ft_isalpha(c3));
	printf("%c es alfa: %d\n", c4, ft_isalpha(c4));
}

void	test_ft_isascii()
{
	char c1 = 'A';
	char c2 = '$';
	char c3 = '9';
	int c4 = 241;
	int c5 = 231;
	
	printf("%c es ascii: %d\n", c1, ft_isascii(c1));
	printf("%c es ascii: %d\n", c2, ft_isascii(c2));
	printf("%c es ascii: %d\n", c3, ft_isascii(c3));
	printf("%c es ascii: %d\n", c4, ft_isascii(c4));
	printf("%c es ascii: %d\n", c5, ft_isascii(c5));
}

void	test_ft_isdigit()
{
	char c1 = 'A';
	char c2 = 'z';
	char c3 = '9';
	char c4 = '%';
	
	printf("%c es digit: %d\n", c1, ft_isdigit(c1));
	printf("%c es digit: %d\n", c2, ft_isdigit(c2));
	printf("%c es digit: %d\n", c3, ft_isdigit(c3));
	printf("%c es digit: %d\n", c4, ft_isdigit(c4));
}

void	test_ft_isprint()
{
	int i = 0;
	while(i<250){
		printf("%d -> %c -> isprint: %d\n",i, i , isprint(i));
		i++;
	}
}

void	check_itoa(int n){
	printf("mi itoa: %s\n", ft_itoa(n));
}


void	test_ft_itoa()
{
	check_itoa(1);
	check_itoa(0);
	check_itoa(123);
	check_itoa(-1);
	check_itoa(+1);
	check_itoa(999999999);
	check_itoa(9);
	check_itoa(-9);
	check_itoa(10);
	check_itoa(-10);
	check_itoa(8124);
	check_itoa(-9874);
	check_itoa(543000);
	check_itoa(-2147483648LL);
	check_itoa(2147483647);
	check_itoa(9);
}


void	test_ft_memchr()
{
	char str[] = "Hola que tal estamos!?";
	char *ptr;

	ptr = ft_memchr(str, 'q', 8);

	if(ptr){
		printf("%s\n", ptr);
	}else{
		printf("No se ha encontrado\n");
	}

	int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
	ptr = ft_memchr(tab, -1, 7);

	if (ptr)
		printf("%s\n", ptr);
	else
		printf("No se haencontrado\n");

}

void	test_ft_memcmp(){
	printf("hola - hola [Res: %d]\n", ft_memcmp("hola","hola",5));
	printf("hola - hola [Res: %d]\n", ft_memcmp("hola","hola",2));
	printf("Hola - hola [Res: %d]\n", ft_memcmp("Hola","hola",10));
	printf("Hola - Hola que tal [Res: %d]\n", 
		ft_memcmp("hola","Hola que tal",20));
}

void	test_ft_memcpy()
{
	char *string = "Hola que tal";
	char dest_string[20];

	ft_memcpy(dest_string, string, 5);

	printf("%s\n", dest_string);
}

void	test_ft_memmove()
{
	char str[] = "Hola mundo!";
	char copied[20];

	ft_memmove(copied, str, 6);

	printf("%s\n", copied);
}

void	test_ft_memset()
{
	char str[] = "Hola que tal todo, estoy probando memset";
	printf("str original: %s\n", str);
	ft_memset(str, 'a', 10);
	printf("str memset: %s\n", str);
}


void	test_ft_putchar_fd()
{

	ft_putchar_fd('X', 1);

}

void	test_ft_putendl_fd(){

	ft_putendl_fd("hola mundo!", 1);	
			
}


void	test_ft_putnbr_fd(){
	
	ft_putnbr_fd(123, 1);

}

void	test_ft_putstr_fd(){

	ft_putstr_fd("hola mundo!", 1);	

}

void	test_ft_split(void)
{
	char *s = "   lorem   ipsum dolor  "; 
	char **a = ft_split(s, ' ');
	while(*a){
		printf("%s\n", *a);
		a++;
	}
}

void	test_ft_strchr()
{
	char *str = "Hola que tal estamos!?";
	
	printf("[H]: %s\n", ft_strchr(str, 'H'));
	printf("[a]: %s\n", ft_strchr(str, 'a'));
	printf("[e]: %s\n", ft_strchr(str, 'e'));
	printf("[z]: %s\n", ft_strchr(str, 'z'));
	printf("[0]: %s\n", ft_strchr(str, '0'));
	
}

void	test_ft_strdup(){

	char *s = "Hola mundo!";
	char *copia;

	copia = ft_strdup(s);

	printf("%s\n", copia);

	free(copia);
}

// void	test_ft_striteri()
// {
// }

// void	test_ft_strmapi()
// {
// }

void	test_ft_join()
{
	char *str1 = "super";
	char *str2 = "cosa";

	char *joined_str = ft_strjoin(str1, str2);

	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
	printf("joined_str: %s\n", joined_str);
}

void	test_ft_strlcat()
{
	char str1[] = "Hola";
	char str2[] = " Mundo!";

	printf("ret: %lu cat:%s\n", ft_strlcat(str1,str2,0), str1);
}

void	test_ft_strlcpy()
{
	char s1[] = "Hola mundo!";
	char s2[20];
	int s2_len = 0;
	
	s2_len = ft_strlcpy(s2, s1, 15);

	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	printf("s2_len:%d \n", s2_len);
}

void	test_ft_strlen()
{
	const char *str = "Hola";
	
	printf("ft_strlen de %s: %ld\n", str, ft_strlen(str));
}

void	test_ft_strncmp()
{
	char *s1 = "hola";
	char *s2 = "hola";

	printf("%d\n", ft_strncmp(s1,s2, 10));

}

void	test_ft_strnstr()
{
	
	char *big = "Hola que tal!?";
	char *little = "que";
	char *res_ptr = ft_strnstr(big, little, 7);	
	
	if(!res_ptr){
		printf("No se encontró\n");
	}else{
		printf("%s\n", res_ptr);
	}
}


void	test_ft_strrchr()
{
	char *str = "Hola que tal estamos!?";
	
	printf("[H]: %s\n", ft_strchr(str, 'H'));
	printf("[a]: %s\n", ft_strchr(str, 'a'));
	printf("[e]: %s\n", ft_strchr(str, 'e'));
	printf("[z]: %s\n", ft_strchr(str, 'z'));
	printf("[0]: %s\n", ft_strchr(str, '0'));

}

void	test_ft_strtrim()
{
	char *original = "azaabbbazacczaaaaa";
	char *trimmed = ft_strtrim(original, "az");

	printf("Original: %s\n", original);
	printf("Trimmed: %s\n", trimmed);

}


void	test_ft_substr()
{
	char *str = "supercalifragilisticoespialidoso";
	char *new_substr = ft_substr(str, 3, 100);

	printf("str: %s\n",str);
	printf("new_substr: %s\n",new_substr);
}


void	test_ft_tolower()
{
	printf("ft_tolower(%c): %c\n", 'A', ft_tolower('A'));
	printf("ft_tolower(%c): %c\n", 'z', ft_tolower('Z'));
	printf("ft_tolower(%c): %c\n", 'a', ft_tolower('a'));
	printf("ft_tolower(%c): %c\n", '!', ft_tolower('!'));
	printf("ft_tolower(%c): %c\n", '0', ft_tolower('0'));
	printf("ft_tolower(%c): %c\n", 245, ft_tolower(245));
}

void	test_ft_toupper()
{
	printf("ft_tolower(%c): %c\n", 'A', ft_toupper('A'));
	printf("ft_tolower(%c): %c\n", 'z', ft_toupper('Z'));
	printf("ft_tolower(%c): %c\n", 'a', ft_toupper('a'));
	printf("ft_tolower(%c): %c\n", '!', ft_toupper('!'));
	printf("ft_tolower(%c): %c\n", '0', ft_toupper('0'));
	printf("ft_tolower(%c): %c\n", 245, ft_toupper(245));

}

int	main()
{

	return (0);
}