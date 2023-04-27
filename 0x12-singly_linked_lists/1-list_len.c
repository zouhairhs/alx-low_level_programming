#include "lists.h"

size_t list_len(const list_t *head)
{
    size_t count = 0;

    while (head)
    {
        count++;
        head = head->next;
    }

    return (count);
}
