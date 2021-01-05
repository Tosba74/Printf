
#include "../includes/libft.h"

static size_t	ft_len_words(char const *s, int pos)
{
	size_t	i;

	i = 0;
	while (s[pos + i] && ft_isspace(s[pos + i]))
		i++;
	return (i);
}

static int		ft_nb_words(char const *s)
{
	int	i;
	int nb;

	i = 0;
	nb = 0;
	if (s == NULL)
		return (i);
	while (s[i] && ft_isspace(s[i]))
		i++;
	while (s[i])
	{
		if ((s[i + 1] == '\0' || ft_isspace(s[i + 1]))
		&& ft_isspace(s[i]))
			nb++;
		i++;
	}
	return (nb);
}

static char		**ft_free_all(char **tab, int t)
{
	int	i;

	i = 0;
	while (i != t)
		free(tab[i++]);
	free(tab);
	return (tab);
}

static char		*ft_new_words(char const *s, int *index)
{
	int		i;
	char	*str;

	i = 0;
	if (!(str = malloc(sizeof(char) * (ft_len_words(s, *index) + 1))))
		return (NULL);
	while (s[*index] && ft_isspace(s[*index]))
		str[i++] = s[(*index)++];
	str[i] = '\0';
	return (str);
}

char			**ft_split_whitespaces(char const *s)
{
	int		i;
	int		t;
	int		nb_words;
	char	**tab;

	i = 0;
	t = -1;
	nb_words = ft_nb_words(s);
	if (!s || !(tab = malloc((nb_words + 1) * sizeof(char*))))
		return (NULL);
	while (++t < nb_words)
	{
		while (s[i] && ft_isspace(s[i]))
			i++;
		if (!ft_isspace(s[i]))
		{
			if (!(tab[t] = ft_new_words(s, &i)))
				return (ft_free_all(tab, t));
		}
	}
	tab[t] = NULL;
	return (tab);
}
