#ifndef _GET_H_
#define _GET_H_

#include "db_types.h"

struct ArgState;

int do_get_cmd(int argc, char *argv[], struct ArgState *as);

int lookup_single_key(char *filename, long key, int use_xrp);

char *grab_value(char *file_name, unsigned long key, int use_xrp);

long lookup_key_userspace(int db_fd, struct Query *query);

void read_value_the_hard_way(int fd, char *retval, ptr__t ptr);

#endif /* _GET_H_ */