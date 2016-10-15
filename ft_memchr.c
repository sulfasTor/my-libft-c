#include "libft.h"

void *ft_memchr(const void *s, int c, size_t len)
{
	while (len--){
		if (*((unsigned char *)s) == (unsigned char)c)
			return (void *)s;
		s++; //increment pointer by one byte because datatype is char
	}
	return (0);
}
