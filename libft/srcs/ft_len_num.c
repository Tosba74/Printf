
#include "../includes/libft.h"

int     ft_len_num(int n, int b)
{
	int		count;

	count = 0;
    if (n < 0)
    {
        n = -n;
        count++;
    }
    while (n > 0 && b >= 1)
    {
        n /= b;
        count++;
    }
    return (count);
}
