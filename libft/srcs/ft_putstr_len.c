#include "../includes/libft.h"

int     ft_putstr(char *s)
{
    write(1, s, ft_strlen(s));
    return(ft_strlen(s));
}
