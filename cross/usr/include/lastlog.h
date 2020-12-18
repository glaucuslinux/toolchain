#ifndef _LASTLOG_H
#define _LASTLOG_H

#include <sys/types.h>

#ifdef __cplusplus
extern "C" {
#endif

#define UT_HOSTSIZE 256
#define UT_LINESIZE 32

struct lastlog {
	time_t ll_time;
	char ll_line[UT_LINESIZE];
	char ll_host[UT_HOSTSIZE];
};

#ifdef __cplusplus
}
#endif

#endif
