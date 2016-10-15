#include <string.h>
#include "libft.h"

int ft_atoi(const char *str)
{
	int i;
	int sign;
	int res;

	i = 0;
	sign = 1;
	res = 0;

	while (str[i] == '\n' || str[i] == '\t' || str[i] == '\v' || str[i] == '\f' ||
	      str[i] == '\r' || str[i] == ' ')
		i++;
  
	if (str[i] == '-' || str[i] == '+'){
		sign = (str[i] == '-') ? -1 : 1;
		i++;
	}
	
	while (str[i]){
		if (!ft_isdigit(str[i]))
			return (sign * res);

		res = res * 10 + str[i] - '0';
		i++;
	}
	
	return (sign * res);
}
