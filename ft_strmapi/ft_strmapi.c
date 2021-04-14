#include <stdlib.h>

static	int	ft_strlen(char const *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *str;
	int i;

	i = 0;
	if (!(str = (char *)malloc(sizeof(*str) * ft_strlen(s) + 1)))
		return NULL;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}
