#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s - Direct singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next nod
 *
 * Description: Direct singly linked list nod structures
 * for Holberton project (holbertonschool)
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
}
list_t;
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
sist_t *add_node(list_t **head, const char *str);
sist_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
