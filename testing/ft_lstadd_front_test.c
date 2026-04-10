#include "libft.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

static void	ft_lstclears(t_list **lst)
{
	t_list	*temp;

	if (lst == NULL)
		return ;
	if (*lst == NULL)
		return ;
	while (*lst != NULL)
	{
		temp = *lst;
		*lst = (*lst)->next;
		free(temp);
	}
	*lst = NULL;
}


int main()
{
	//ne dois pas planter
	ft_lstadd_front(NULL, NULL);
	t_list *malist = NULL;
	char *str1 = "";
	char *str2 = "hey";
	char *str3 = NULL;
	t_list *to_add1 = ft_lstnew(str1);
	t_list *to_add2 = ft_lstnew(str2);
	t_list *to_add3 = ft_lstnew(str3);

	ft_lstadd_front(&malist, to_add1);
	if (malist == NULL)
	{
		printf("==> Erreur <===\nListe de base vide. Il faut l'initialiser\n\n");
		return (1);
	}
	ft_lstadd_front(&malist, to_add2);
	if (strcmp(malist->content , str2) != 0 || strcmp(malist->next->content , str1) != 0)
	{
		printf("==> Erreur <===\nMauvaise Gestion des ajouts\n\n");
		return (1);
	}
	ft_lstadd_front(&malist, to_add3);
	if (malist->content != NULL)
	{
		printf("==> Erreur <===\nMauvaise Gestion des ajouts. Null devrait etre ajouté\n\n");
		return (1);
	}
	//ne doit pas planter
	ft_lstadd_front(&malist, NULL);
	ft_lstclears(&malist);
}