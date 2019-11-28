#include "list.h"

void mx_push_front(t_list **list, void *data) {
  if (data == NULL || list == NULL) {

  } else {
    t_list *file = mx_create_node(data);
    t_list *temp = *list;

    *list = file;
    file->next = temp;
  }
}
