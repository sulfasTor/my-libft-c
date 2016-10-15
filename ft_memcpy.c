#include "libft.h"
#include <string.h>

void *ft_memcpy(void *dest, const void *src, size_t len)
{
	int i;
	i = 0;
	
	//while (((unsigned char *)dest)[i] && len--){
	while (len--){
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	((unsigned char *)dest)[i] = '\0';
	
	return (void *)dest;
}
