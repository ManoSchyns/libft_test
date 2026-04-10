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

//affiche juste le contenu de la liste après avoir ajouté
int main()
{
	t_list *copy;
	//ne dois pas planter
	ft_lstadd_back(NULL, NULL);
	t_list *malist = NULL;
	char *str1 = "";
	char *str2 = "hey";
	char *str3 = NULL;
	char *str4 = "hola";
	char *str5 = "NOn";
	char *str6 = "pas";
	char *str7 = "cool";
	t_list *to_add1 = ft_lstnew(str1);
	t_list *to_add2 = ft_lstnew(str2);
	t_list *to_add3 = ft_lstnew(str3);
	t_list *to_add4 = ft_lstnew(str4);
	t_list *to_add5 = ft_lstnew(str5);
	t_list *to_add6 = ft_lstnew(str6);
	t_list *to_add7 = ft_lstnew(str7);
	ft_lstadd_back(&malist, to_add1);
	ft_lstadd_back(&malist, to_add2);
	ft_lstadd_back(&malist, to_add3);
	ft_lstadd_back(&malist, to_add4);
	ft_lstadd_back(&malist, to_add5);
	ft_lstadd_back(&malist, to_add6);
	ft_lstadd_back(&malist, to_add7);
	//ne dois pas planter
	ft_lstadd_back(&malist, NULL);

	copy = malist;
	while (malist != NULL)
	{
		if (malist->content == NULL)
			printf("NULL\n");
		else
			printf("%s\n",(char *) malist->content);
		malist = malist->next;
	}
	ft_lstclears(&copy);
}