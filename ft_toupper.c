#include "libft.h"

int ft_toupper(int nb){
  
  if (nb >= 'A' && nb <= 'Z') return nb;
  
  return (nb - 32);
}
