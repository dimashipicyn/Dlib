#include <stdio.h>
#include "libft.h"
#include <assert.h>

int main()
{
	printf("------Test ft_list_remove if--------\n");
	{
		t_list *node;
		char *av[] = {"hello", "world", "lorem", "ipsym", "dolor"};
		node = ft_list_push_params(5, av);
		ft_list_remove_if(&node, "hello", ft_strcmp);
		assert(ft_list_find(node, "hello", ft_strcmp) == 0);
		ft_list_remove_if(&node, "dolor", ft_strcmp);
		assert(ft_list_find(node, "dolor", ft_strcmp) == 0);
		ft_list_remove_if(&node, "lorem", ft_strcmp);
		assert(ft_list_find(node, "lorem", ft_strcmp) == 0);
		ft_list_remove_if(&node, "world", ft_strcmp);
		assert(ft_list_find(node, "world", ft_strcmp) == 0);
		ft_list_remove_if(&node, "ipsym", ft_strcmp);
		assert(ft_list_find(node, "ipsym", ft_strcmp) == 0);
	}
	return (0);
}
