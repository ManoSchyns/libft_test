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

static void	ft_lstadd_backs(t_list **lst, t_list *new)
{
	t_list	*work;

	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	work = *lst;
	while (work->next != NULL)
		work = work->next;
	work->next = new;
}


static void ft_lstsize_test(t_list *list, int excpected)
{
	int len;

	len = ft_lstsize(list);
	if (len != excpected)
	{
		printf("===> Erreur <===\n");
		printf("Taille attendue : %d, la tienne : %d\n\n", excpected, len);
	}
}

int main(void)
{

	t_list *malist = NULL;
	ft_lstsize_test(NULL,0);
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
	ft_lstsize_test(malist,4);
	ft_lstadd_back(&malist, to_add5);
	ft_lstadd_back(&malist, to_add6);
	ft_lstadd_back(&malist, to_add7);
	ft_lstsize_test(malist,7);
	ft_lstclears(&malist);
}