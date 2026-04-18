#include "libft.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

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

static void del(void *elem)
{
	printf("oik");
}

static void *f(void *item)
{
	char *c = "A";
	return (void *)c;
}

static void ft_lstmap_test(t_list *lst)
{
	t_list *lst2;
	t_list *lst2_start;
	char *elem;

	lst2 = NULL;
	lst2 = ft_lstmap(lst, f, del);
	if (lst2 == NULL)
	{
		printf("Pas bon, pointeur NULL");
		return ;
	}
	lst2_start = lst2;
	while(lst2 != NULL)
	{
		elem = (char *)lst2->content;
		if(elem[0] != 'A')
		{
			printf("La fonction f n'a pas été appliquée");
		}
		lst2 = lst2->next;
	}
	ft_lstclears(&lst2_start);
}

int main(void)
{
	t_list *malist = NULL;
	t_list *malist2 = NULL;
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
	malist2 = ft_lstmap(malist, NULL, del);
	if (malist2 != NULL)
		printf("F ne peut pas etre egal à NULL");
	malist2 = ft_lstmap(malist, f, NULL);
	if (malist2 != NULL)
		printf("del ne peut pas etre egal à NULL");
	malist2 = ft_lstmap(NULL, f, del);
	if (malist2 != NULL)
		printf("Impossible de travailler sur une liste vide");

	ft_lstmap_test(malist);
	ft_lstclears(&malist);
}