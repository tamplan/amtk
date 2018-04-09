AM_CPPFLAGS = 			\
	-I$(top_srcdir) 	\
	$(WARN_CFLAGS) 		\
	$(AMTK_DEP_CFLAGS)

AM_LDFLAGS = $(WARN_LDFLAGS)

LDADD = $(top_builddir)/amtk/libamtk-core.la	\
	$(AMTK_DEP_LIBS)

noinst_PROGRAMS = $(TEST_PROGS)
TEST_PROGS =

# TODO use Amtk only.
#TEST_PROGS += test-menu
#test_menu_SOURCES = test-menu.c

-include $(top_srcdir)/git.mk
