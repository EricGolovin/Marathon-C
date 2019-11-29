#include "list.h"

t_list *mx_sort_list(t_list *list, bool (*cmp)(void *a, void *b)) {
  t_list *temp = list;
  for( ; list->next != NULL; list = list->next) {
    for(t_list *count = list->next; count != NULL; count = count->next) {
      if(cmp(list->next, count->next)) {
        int *temp = list->data;
        list->data = count->data;
        temp = list->data;
        count->data = temp;
      }
    }
  }
  return temp;
}
