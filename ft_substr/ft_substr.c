#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *str;
	int i;

	i = 0;
	if (!(str = (char *)malloc(sizeof(*str) * (len - start) + 1)))
		return NULL;
	while (start <= len)
		str[i++] = s[start++];
	str[i] = 0;
	return (str);
}
