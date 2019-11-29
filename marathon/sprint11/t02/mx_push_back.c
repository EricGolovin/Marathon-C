#include "list.h"

void mx_push_back(t_list **list, void *data) {
  if (list != NULL || data != NULL) {
    t_list *temp = *list;
    while (temp->next != NULL) {
      temp = temp->next;
    }

    t_list *file = mx_create_node(data);
    temp->next = file;

  }
}
