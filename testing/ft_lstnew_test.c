#include "libft.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

static void ft_lstnew_test(void *content)
{
	t_list *elem;

	elem = ft_lstnew(content);
	if (elem == NULL)
	{
		printf("===> Erreur <===\n");
		printf("L'element a mal été créer. Valeur->NULL\n\n");
		return ;
	}
	else if (elem->next != NULL)
	{
		printf("===> Erreur <===\n");
		printf("L'element a mal été créer. next n'est pas initialisé a NULL\n\n");
		return ;
	}
	else if (elem->content != content)
	{
		printf("===> Erreur <===\n");
		printf("L'element a mal été créer. elem->content n'est pas initialisé a la bonne valeur\n\n");
		return ;
	}
	free(elem);
}

int main()
{
	ft_lstnew_test("heyy");
	int tab[] = {1,2,3,4};
	ft_lstnew_test(tab);
	ft_lstnew_test(NULL);
}