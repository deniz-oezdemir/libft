/*
do NOT submit this file!
*/

#include <stdio.h>

char to_uppercase(unsigned int index, char c)
	{
		if (c >= 'a' && c <= 'z')
			return c - 'a' + 'A';
		return c;
	}

#include "libft.h"
int	main()
{
	printf("1: u is printable: %d\n", ft_isprint('u'));
	printf("2: length of hello: %zu\n", ft_strlen("hello"));
	printf("3: only the word in the middle of hello my friend: %s\n", ft_substr("hello my friend", 6, 2));
	

	char	dst[30] = "hello ";
	char	*src = "friend.";
	size_t	i = ft_strlcat(dst, src, 15);
	printf("4: %s\n", dst); 


	const char *haystack = "Hello, friend!";
	const char *needle1 = "friend";
	const char *needle2 = "antitest";
	char *result1 = ft_strnstr(haystack, needle1, 15);
	char *result2 = ft_strnstr(haystack, needle2, 15);
	printf("5.1: ");
	if (result1)
		printf("Substring found at position %ld\n", result1 - haystack);
	else
		printf("Substring not found\n");
	printf("5.2: ");
	if (result2)
		printf("Substring found at position %ld\n", result2 - haystack);
	else
		printf("Substring not found\n");


	int	*arr;
	arr = (int *)ft_calloc(5, sizeof(int));
	if (!arr)
	{
			fprintf(stderr, "Memory allocation failed\n");
			return (1);
	}
	printf("Initialized values: ");
	i = 0;
	while(i < 5)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
	free(arr);


	char test_string[] = "hello friend, let's split me up! ! && kkkk k";
	char separator = ' ';
	char **result = ft_split(test_string, separator);
	i = 0;
	while (result[i] != NULL)
	{
		printf("6.%ld: %s\n", i + 1, result[i]);
		i++;
	}
	i = 0;
	while (result[i] != NULL)
	{
		free(result[i]);
		i++;
	}
	free(result);
	

	printf("7: %s", ft_itoa(-69420));
	printf("\n");

	char *lower = "lets capitalize me";
	printf("8.1: Original string: %s\n", lower);
	char *upper;
	upper = ft_strmapi(lower, &to_uppercase);
	printf("8:2: String after applying function: %s\n", upper);
	free(upper);

	ft_putstr_fd("9: ", 1);
	ft_putnbr_fd(-42069, 1);
	ft_putstr_fd("\n", 1);


	int number = 42;
	t_list *node1 = ft_lstnew(&number);
	char *text = "Hello, friend!";
	t_list *node2 = ft_lstnew(text);
	printf("10.1: Node 1 content: %d\n", *(int *)(node1->content)); //dereference pointer to int
	printf("10.2: Node 2 content: %s\n", (char *)(node2->content));
	free(node1);
	free(node2);


	char *teststr = "Hello, end!!";
	t_list *node3 = ft_lstnew(teststr);
	t_list *head = NULL;
	ft_lstadd_back(&head, node3);
	t_list *current = head;
	while (current != NULL)
	{
		if (current->content != NULL)
			printf("11: Node 3 content: %s\n", (char *)(current->content));
		current = current->next;
	}
	free(node3);


/*
	void	*add_one(void *content)
	{
		int *num = (int *)content;
		*num = *num + 1;
	}
	void	free_content(void *content)
	{
		free(content);
	}
	t_list	*lst = ft_lstnew((void *)1);
	t_list	*elem2 = ft_lstnew((void *)2);
	t_list	*elem3 = ft_lstnew((void *)3);
	ft_lstadd_back(&lst, elem2);
	ft_lstadd_back(&lst, elem3);
	printf("12.1: Original list: ");
	t_list *tmp = lst;
	while (tmp)
	{
		printf("%ld ", (size_t)tmp->content);
		tmp = tmp->next;
	}
	printf("\n");
	t_list *new_list = ft_lstmap(lst, add_one, free_content);
	printf("12.2: Mapped list: ");
	tmp = new_list;
	while (tmp)
	{
		printf("%ld ", (size_t)tmp->content);
		tmp = tmp->next;
	}
	printf("\n");
	ft_lstclear(&lst, free_content);
	ft_lstclear(&new_list, free_content);
*/

	return (0);
}
