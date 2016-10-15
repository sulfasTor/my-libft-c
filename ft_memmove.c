#include "libft.h"
#include <string.h>


void *ft_memmove(void *dest, const void *src, size_t len)
{
	size_t i;
		
	while(src > dest && len--){
		((unsigned char *)dest)[len-1] = ((unsigned char *)src)[len-1];
	}
	i = 0;

	while(src < dest && len--){
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
	}
	
	return dest;
}

