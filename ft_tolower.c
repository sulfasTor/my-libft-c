#include "libft.h"

int ft_tolower(int nb)
{
  
  if (nb >= 'a' && nb <= 'z') return nb;
  
  return (nb + 32);
}
