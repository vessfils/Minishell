#include "minishell.h"

int	handle_variable(t_list **current)
{
	t_token *token;
	t_list *todel;

	token = (*current)->content;
	todel = *current;
	if (!todel->next || get_token_type(token) != variable)
		return (ERROR);
	*current = (*current)->next;
	concatenate_sametype(current, literal);
	ft_list_remove_current_node(&g_info.list_input, todel, clear_token);
	return (SUCCESS);
}