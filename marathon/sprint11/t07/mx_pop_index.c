#include "list.h"

void mx_pop_index(t_list **list, int index) {
  if (list == NULL || list == NULL) {
  } else if ((*list)->next == NULL || index < 0) {
    free(*list);
    *list = NULL;
  } else {
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
