
CC	= gcc
CFLAGS	= -Wall -pedantic -ansi
LDFLAGS	= -lm -lgmp
BUILDDIR= build
LIBDIR	= lib

STRIP	= strip
RMDIR	= rm -fr
RM	= rm -f

SOURCES := $(shell find . -maxdepth 1 -name 'p*.c')
PROGS	:= $(addprefix $(BUILDDIR)/, $(SOURCES:./%.c=%))

all:: $(PROGS)

$(BUILDDIR)/p% : p%.c
	mkdir -p $(BUILDDIR)
	$(CC) $(CFLAGS) $^ -o $@ $(LDFLAGS)
	$(STRIP) $@

$(BUILDDIR)/p7 : p7.c $(LIBDIR)/prime.o
$(BUILDDIR)/p8 : p8.c $(LIBDIR)/io.o
$(BUILDDIR)/p10 : p10.c $(LIBDIR)/prime.o
$(BUILDDIR)/p12 : p12.c $(LIBDIR)/prime.o

clean :
	$(RMDIR) $(BUILDDIR)
	$(RM) $(LIBDIR)/*.o
