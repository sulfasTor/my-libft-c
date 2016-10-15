//#include <string.h> //only for NULL constant and size_t
#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
	if (n == 0)
		return s;

	char *t;
	int i;
	i = 0;
	t = (char *)s;
	
	while(n--){
		t[i] = c;
		i++;
	}
	
	return s;
}
