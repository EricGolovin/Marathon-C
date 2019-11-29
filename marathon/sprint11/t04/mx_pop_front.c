#include "list.h"

void mx_pop_front(t_list **list) {
  if (list == NULL) {

  } else if ((*list)->next == NULL) {
    free(*list);
    *list = NULL;
  } else {
    t_list *temp = (*list)->next;
    free(*list);
    *list = temp;
  }
}
