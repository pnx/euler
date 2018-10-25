
CC 		 = gcc
CFLAGS 	 = -Wall -pedantic -ansi
LDFLAGS  = -lm -lgmp
BUILDDIR = build
LIBDIR 	 = lib

STRIP	 = strip
RMDIR	 = rm -fr
RM 		 = rm -f

p% : p%.c
	mkdir -p $(BUILDDIR)
	$(CC) $(CFLAGS) $^ -o $(BUILDDIR)/$@ $(LDFLAGS)
	$(STRIP) $(BUILDDIR)/$@

p7 : p7.c $(LIBDIR)/prime.o
p8 : p8.c $(LIBDIR)/io.o
p10 : p10.c $(LIBDIR)/prime.o
p12 : p12.c $(LIBDIR)/prime.o

$(LIBDIR)/%.o : $(LIBDIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	$(RMDIR) $(BUILDDIR)
	$(RM) $(LIBDIR)/*.o
