#include "minishell.h"

static void	remplace_value_variable(t_token *token)
{
	char	*var;
	char	*retvar;

	var = token->value;
	var = get_var_value(&g_info.list_env, var);
	retvar = ft_strdup(var);
	if (!retvar)
		exit(free_all(&g_info, ERROR));
	if (retvar)
	{
		free(token->value);
		token->value = retvar;
		token->type = literal;
		free(retvar);
	}
}


int	handle_variable(t_list **current)
{
	t_token	*token;
	t_list	*todel;

	token = (*current)->content;
	todel = *current;
	if (get_token_type(token) != variable)
		return (ERROR);
	if (!todel->next || get_token_type(todel->next->content) != literal)
		return (ERROR);
	*current = (*current)->next;
	concatenate_sametype(current, literal);
	ft_list_remove_current_node(&g_info.list_input, todel, clear_token);
	token = (*current)->content;
	remplace_value_variable(token);
	return (SUCCESS);

}
