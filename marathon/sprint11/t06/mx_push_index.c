#include "list.h"

void mx_push_index(t_list **list, void *data, int index) {
  if (list == NULL || list == NULL) {
  } else if ((*list)->next == NULL) {
    (*list)->data = data;
    (*list)->next = NULL;
  } else {
    if (index < 0) {
      mx_push_front(list, data);
    } else {
      t_list *file = mx_create_node(data);
      int i;
      for (i = 0; (*list)->next != NULL; i++, *list = (*list)->next) {
        if (i == index) {
          t_list *temp = *list;
          *list = file;
          (*list)->next = temp;
        }
      }
      if (index > i) {
        mx_push_back(list, data);
      }
    }
  }
}
