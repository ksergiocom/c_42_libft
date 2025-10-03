#include <stddef.h>

void *ft_bzero(void *dest, size_t count);
int ft_isascii(int c);
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
void *ft_memcpy(void *dest, const void *src, size_t count);
void *ft_memset(void *dest, int c, size_t count);
char *ft_strchr(const char *s, int c);
char *ft_strjoin(char const *s1, char const *s2);
size_t ft_strlen(const char *s);
int ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strrchr(const char *s, int c);
char *ft_substr(char const *s, unsigned int start, size_t len);
int ft_tolower(int c);
int ft_toupper(int c);
