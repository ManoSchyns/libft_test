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


static void ft_lstlast_test(t_list *list, char *excpected)
{
	t_list *last;

	last = ft_lstlast(list);
	if (last == NULL && excpected == NULL)
		printf("NUll case good\n");
	else if (last == NULL || excpected == NULL)
		printf("NULL case not good\n");
	else if ((char *)last->content != excpected)
	{
		printf("===> Erreur <===\n");
		printf("Dernier attendu : %s, le tien : %s\n\n", excpected, (char *)last->content);
	}
}

int main(void)
{

	t_list *malist = NULL;
	ft_lstlast_test(NULL, NULL);
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
	ft_lstlast_test(malist,str4);
	ft_lstadd_back(&malist, to_add5);
	ft_lstadd_back(&malist, to_add6);
	ft_lstadd_back(&malist, to_add7);
	ft_lstlast_test(malist,str7);
	ft_lstclears(&malist);
}