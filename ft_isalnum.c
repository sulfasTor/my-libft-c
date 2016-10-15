#include "libft.h"

int ft_isalnum(int nb)
{
  return ft_isalpha(nb) || ft_isdigit(nb);
}
