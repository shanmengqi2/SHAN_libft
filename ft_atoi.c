#include "libft.h"

static int	ft_isspace(int c)
{
	return (c == ' ' || c == '\t' || c == '\n' || \
			c == '\v' || c == '\f' || c == '\r');
}

int	ft_atoi(const char *str)
{
	int		sign;
	long long	res;

	res = 0;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		if (res > 922337203685477580 || (res == 922337203685477580 && (*str - '0') > 7))
		{
			if (sign == 1)
				return (-1);
			else
				return (0);
		}
		res = res * 10 + (*str - '0');
		str++;
	}
	return ((int)(res * sign));
}