#ifndef LOCKS_H
#define LOCKS_H

#include <pthread.h>

#define MAX_CUSTOMERS 1000

extern pthread_mutex_t customer_mutex[MAX_CUSTOMERS];

#endif
