#include "minishell.h"

char *get_var_value(t_list *listenv, char *name)
{
	int		size;
	char	*str;

	size = 0;
	size = ft_strlen(name);
	str = NULL;
	while (listenv)
	{
		str = (char *)listenv->content;
		if (ft_strstr(str, name) && str[size] == '=')
			return (&str[size + 1]);
		listenv = listenv->next;
	}
	return (0);
}
