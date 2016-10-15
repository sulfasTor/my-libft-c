/** My first library in C
 *
 *@author:sulfastor
 *@date:14/10/16
 *
 **/
#include <string.h>

void				*ft_memset(void *s, int c, size_t n);
size_t 				ft_strlen(const char *s);
void 				*ft_memmove(void *dest, const void *src, size_t len);
int 				ft_tolower(int nb);
int 				ft_isdigit(int nb);
int 				ft_isalpha(int nb);
int 				ft_isalnum(int nb);
int 				ft_isascii(int nb);
int				ft_isprint(int nb);
int 				ft_toupper(int nb);
int 				ft_atoi(const char *ptr);
void 				*ft_memcpy(void *dest, const void *src, size_t len);
void 				*ft_memccpy(void *dest, const void *src, int c, size_t len);
void 				*ft_bzero(void *s, size_t len);
void *ft_memchr(const void *s, int c, size_t len);
int ft_memcmp(const void *s1, const void *s2, size_t n);
