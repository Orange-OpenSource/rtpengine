#ifndef __KERNEL_H__
#define __KERNEL_H__



#include <sys/types.h>
#include <glib.h>
#include <netinet/in.h>




struct rtpengine_target_info;
struct re_address;



int kernel_create_table(unsigned int);
int kernel_open_table(unsigned int);

int kernel_add_stream(int, struct rtpengine_target_info *, int);
int kernel_del_stream(int, const struct re_address *);
GList *kernel_list(unsigned int);




#endif
