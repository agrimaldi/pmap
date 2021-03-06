## -*- Mode: Makefile; -*-
## vim: set ft=automake :
##
## (C) 2011 by Argonne National Laboratory.
##     See COPYRIGHT in top-level directory.
##

include $(top_srcdir)/src/util/dbg/Makefile.mk
include $(top_srcdir)/src/util/instrm/Makefile.mk
include $(top_srcdir)/src/util/logging/Makefile.mk
include $(top_srcdir)/src/util/mem/Makefile.mk
include $(top_srcdir)/src/util/msgs/Makefile.mk
include $(top_srcdir)/src/util/other/Makefile.mk
include $(top_srcdir)/src/util/param/Makefile.mk
include $(top_srcdir)/src/util/procmap/Makefile.mk
include $(top_srcdir)/src/util/thread/Makefile.mk
include $(top_srcdir)/src/util/wrappers/Makefile.mk

# "ex" and "multichannel" are Windows-only directories that we do not build with automake
#include $(top_srcdir)/src/util/ex/Makefile.mk
#include $(top_srcdir)/src/util/multichannel/Makefile.mk

