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

static void ft_lstiter_test(t_list *lst)
{
	char *elem;

	while(lst != NULL)
	{
		elem = (char *)lst->content;
		if(elem[0] != 'A')
		{
			printf("La fonction f n'a pas été appliquée");
		}
		lst = lst->next;
	}
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

static void f(void *item)
{
	char *elem;

	elem = (char *)item;
	elem[0] = 'A';
}

int main(void)
{
	t_list *malist = NULL;
	char str1[] = "ok";
	char str2[] = "hey";
	char str3[] = "hooo";
	char str4[] = "hola";
	char str5[] = "NOn";
	char str6[] = "pas";
	char str7[] = "cool";
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

	//ne doit pas planter
	ft_lstiter(malist, NULL);
	ft_lstiter(NULL, f);

	ft_lstiter(malist, f);

	ft_lstiter_test(malist);
	ft_lstclears(&malist);
}