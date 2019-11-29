#include "list.h"

t_list *mx_create_node(void *data) {
  if (data == NULL) {
    return NULL;
  } else {
    t_list *file = (t_list *) malloc(sizeof(t_list));

    file->data = data;
    file->next = NULL;
    return file;
  }
}
