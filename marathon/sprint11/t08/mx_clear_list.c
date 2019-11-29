#include "list.h"

void mx_clear_list(t_list **list) {
  t_list *temp = *list;
  while (temp->next) {
    if (temp->next->next) {
      free(temp->next);
      temp->next = NULL;
      temp = (*list);
      continue;
    }
    if (temp->next) {
      temp = temp->next;
    }
  }
  (*list)->next = NULL;
  *list = NULL;
  free(temp);
}
