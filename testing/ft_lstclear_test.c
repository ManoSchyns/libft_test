#include "libft.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

static void del(void *)
{
	printf("Bien del\n");
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

int main(void)
{
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
	ft_lstadd_backs(&malist, to_add1);
	ft_lstadd_backs(&malist, to_add2);
	ft_lstadd_backs(&malist, to_add3);
	ft_lstadd_backs(&malist, to_add4);
	ft_lstadd_backs(&malist, to_add5);
	ft_lstadd_backs(&malist, to_add6);
	ft_lstadd_backs(&malist, to_add7);
	ft_lstclear(&malist, NULL);
	ft_lstclear(&malist, del);
	ft_lstclear(NULL, del);
}