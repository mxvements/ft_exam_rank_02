#include <stdlib.h>
#include <unistd.h>

#include "/Users/luciama2/20-exam_rank_02/1130-02/42-EXAM/subjects/list.h"

/* sort_list
 * t_list	*sort_list(t_list *lst, int (*cmp)(int, int));
 * 			sort the list given as a parameter, using the function pointer cmp to 
 * 			select the order to apply, and returns a ptr to the 1st elem of the sorted 
 * 			list.
 * 			Duplications must remain
 * 			Inputs will always be consistent.
 * 			You must use t_list described in the file list.h (not to be included in
 * 			the repo)
 *
 * example of function use to cmp
 * int	ascending (int a, int b)
 * return (a <= b);
 * 			functions passed as cmp will always return a value different from 0 if a
 * 			and b are in the right order, 0 otherwise.
 */

/*
int	ascending(int a, int b)
{
	return (a <= b ? 1 : 0);
}*/

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list	*rslt;
	int		a;
	int		b;
	int		tmp;

	rslt = lst;
	while (lst->next != NULL)
	{
		a = lst->data;
		b = lst->next->data;
		if (cmp(a, b) == 0)
		{
			tmp = a;
			lst->data = b;
			lst->next->data = tmp;
			lst = rslt;
		}
		else
			lst=lst->next;
	}	
	return (rslt);
}

