#include "list.h"

int mx_list_size(t_list *list) {
  if (list == NULL) {
    return 0;
  } else if (list->next == NULL) {
    return 1;
  } else {
    int counter = 0;
    t_list *temp = list;
    while (temp->next != NULL) {
      counter++;
      temp = temp->next;
    }
    return counter + 1;
  }
}
