#include "libft.h"

int ft_isalpha(int nb)
{
  return (nb >= 'a' && nb <='z') || (nb >= 'A' && nb <='Z');
}
