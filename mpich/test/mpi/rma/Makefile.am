# -*- Mode: Makefile; -*-
# vim: set ft=automake :
#
# (C) 2011 by Argonne National Laboratory.
#     See COPYRIGHT in top-level directory.
#

include $(top_srcdir)/Makefile.mtest

EXTRA_DIST = testlist

## for all programs that are just built from the single corresponding source
## file, we don't need per-target _SOURCES rules, automake will infer them
## correctly
noinst_PROGRAMS =          \
    allocmem               \
    ircpi                  \
    test1                  \
    test2                  \
    test3                  \
    test4                  \
    test5                  \
    lockcontention         \
    lockcontention2        \
    lockcontention3        \
    lockopts               \
    contention_put         \
    contention_putget      \
    put_base               \
    put_bottom             \
    locknull               \
    wintest                \
    transpose1             \
    transpose2             \
    transpose3             \
    transpose4             \
    transpose5             \
    transpose6             \
    transpose7             \
    fetchandadd            \
    fetchandadd_tree       \
    winname                \
    putfence1              \
    putfidx                \
    epochtest              \
    getfence1              \
    accfence1              \
    accfence2              \
    adlb_mimic1            \
    putpscw1               \
    accpscw1               \
    getgroup               \
    contig_displ           \
    test1_am               \
    test2_am               \
    test3_am               \
    test4_am               \
    test5_am               \
    fetchandadd_am         \
    fetchandadd_tree_am    \
    accfence2_am           \
    test1_dt               \
    attrorderwin           \
    wincall                \
    fkeyvalwin             \
    baseattrwin            \
    nullpscw               \
    rmanull                \
    rmazero                \
    mixedsync              \
    manyrma2		   \
    selfrma                \
    strided_acc_onelock    \
    strided_putget_indexed \
    strided_putget_indexed_shared \
    strided_acc_indexed    \
    strided_acc_subarray   \
    strided_get_indexed    \
    strided_getacc_indexed \
    strided_getacc_indexed_shared \
    window_creation        \
    win_flavors            \
    win_shared             \
    win_shared_noncontig   \
    win_shared_noncontig_put \
    win_dynamic_acc        \
    get_acc_local          \
    compare_and_swap       \
    linked_list            \
    linked_list_fop        \
    linked_list_lockall    \
    linked_list_bench_lock_all  \
    linked_list_bench_lock_excl \
    linked_list_bench_lock_shr  \
    linked_list_bench_lock_shr_nocheck  \
    fetch_and_op_char      \
    fetch_and_op_short     \
    fetch_and_op_int       \
    fetch_and_op_long      \
    fetch_and_op_double    \
    fetch_and_op_long_double \
    get_accumulate_short   \
    get_accumulate_long    \
    get_accumulate_double  \
    get_accumulate_int     \
    get_accumulate_short_derived   \
    get_accumulate_long_derived    \
    get_accumulate_double_derived  \
    get_accumulate_int_derived     \
    flush                  \
    reqops                 \
    req_example            \
    win_info               \
    pscw_ordering          \
    mutex_bench            \
    mutex_bench_shared

strided_acc_indexed_LDADD       = $(LDADD) -lm
strided_acc_onelock_LDADD       = $(LDADD) -lm
strided_acc_subarray_LDADD      = $(LDADD) -lm
strided_get_indexed_LDADD       = $(LDADD) -lm
strided_getacc_indexed_LDADD    = $(LDADD) -lm
strided_putget_indexed_LDADD    = $(LDADD) -lm
strided_getacc_indexed_shared_LDADD = $(LDADD) -lm
strided_putget_indexed_shared_LDADD = $(LDADD) -lm

fetch_and_op_char_CPPFLAGS       = -DFOP_TYPE_CHAR $(AM_CPPFLAGS)
fetch_and_op_short_CPPFLAGS      = -DFOP_TYPE_SHORT $(AM_CPPFLAGS)
fetch_and_op_int_CPPFLAGS        = -DFOP_TYPE_INT $(AM_CPPFLAGS)
fetch_and_op_long_CPPFLAGS       = -DFOP_TYPE_LONG $(AM_CPPFLAGS)
fetch_and_op_double_CPPFLAGS     = -DFOP_TYPE_DOUBLE $(AM_CPPFLAGS)
fetch_and_op_long_double_CPPFLAGS= -DFOP_TYPE_LONG_DOUBLE $(AM_CPPFLAGS)

fetch_and_op_char_SOURCES        = fetch_and_op.c
fetch_and_op_short_SOURCES       = fetch_and_op.c
fetch_and_op_int_SOURCES         = fetch_and_op.c
fetch_and_op_long_SOURCES        = fetch_and_op.c
fetch_and_op_double_SOURCES      = fetch_and_op.c
fetch_and_op_long_double_SOURCES = fetch_and_op.c

get_accumulate_short_CPPFLAGS    = -DGACC_TYPE_SHORT $(AM_CPPFLAGS)
get_accumulate_long_CPPFLAGS     = -DGACC_TYPE_LONG $(AM_CPPFLAGS)
get_accumulate_double_CPPFLAGS   = -DGACC_TYPE_DOUBLE $(AM_CPPFLAGS)
get_accumulate_int_CPPFLAGS      = -DGACC_TYPE_INT $(AM_CPPFLAGS)
get_accumulate_short_derived_CPPFLAGS  = -DGACC_TYPE_SHORT -DGACC_TYPE_DERIVED $(AM_CPPFLAGS)
get_accumulate_long_derived_CPPFLAGS   = -DGACC_TYPE_LONG -DGACC_TYPE_DERIVED $(AM_CPPFLAGS)
get_accumulate_double_derived_CPPFLAGS = -DGACC_TYPE_DOUBLE -DGACC_TYPE_DERIVED $(AM_CPPFLAGS)
get_accumulate_int_derived_CPPFLAGS    = -DGACC_TYPE_INT -DGACC_TYPE_DERIVED $(AM_CPPFLAGS)

get_accumulate_short_SOURCES     = get_accumulate.c
get_accumulate_long_SOURCES      = get_accumulate.c
get_accumulate_double_SOURCES    = get_accumulate.c
get_accumulate_int_SOURCES       = get_accumulate.c
get_accumulate_short_derived_SOURCES  = get_accumulate.c
get_accumulate_long_derived_SOURCES   = get_accumulate.c
get_accumulate_double_derived_SOURCES = get_accumulate.c
get_accumulate_int_derived_SOURCES      = get_accumulate.c

mutex_bench_SOURCES              = mutex_bench.c mcs-mutex.c mcs-mutex.h
mutex_bench_shared_CPPFLAGS      = -DUSE_WIN_SHARED $(AM_CPPFLAGS)
mutex_bench_shared_SOURCES       = mutex_bench.c mcs-mutex.c mcs-mutex.h

linked_list_bench_lock_shr_nocheck_SOURCES  = linked_list_bench_lock_shr.c
linked_list_bench_lock_shr_nocheck_CPPFLAGS = -DUSE_MODE_NOCHECK $(AM_CPPFLAGS)
