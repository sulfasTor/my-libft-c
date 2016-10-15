#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t len)
{
	int i;
	i = 0;

	if (len == 0) return (0);
	while(((unsigned char *)s1)[i] == ((unsigned char *)s2)[i] && len--){

		if (len == 0)
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}
