/**
 * Dummy hb-energy implementation - doesn't read from any source.
 *
 * @author Connor Imes
 * @date 2014-07-30
 */
#ifndef _EM_DUMMY_H_
#define _EM_DUMMY_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "em-generic.h"
#include <inttypes.h>

int em_init_dummy(void);

double em_read_total_dummy(int64_t last_hb_time, int64_t curr_hb_time);

int em_finish_dummy(void);

char* em_get_source_dummy(void);

em_impl* em_impl_alloc_dummy(void);

#ifdef __cplusplus
}
#endif

#endif
