#include "list.h"

void mx_del_node_if(t_list **list, void *del_data, bool (*cmp)(void *a, void *b)) {
  for (; (*list)->next != NULL;) {
    if (cmp(del_data, (*list)->data)) {
      t_list *temp = (*list)->next;
      free(*list);
      *list = temp;
    } else {
      (*list) = (*list)->next;
    }
  }
}
