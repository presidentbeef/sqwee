# Generated automatically by configure.rb.

srcdir = /home/justin/pkgs/sqwee/src/eruby
topdir = /usr/lib/ruby/1.8/i686-linux
hdrdir = /usr/lib/ruby/1.8/i686-linux
VPATH = $(srcdir)

arch = i686-linux
sitearch = i686-linux
ruby_version = 1.8

DESTDIR = 

prefix = $(DESTDIR)/usr
exec_prefix = $(prefix)
bindir = $(exec_prefix)/bin
datadir = $(datarootdir)
libdir = $(exec_prefix)/lib
rubylibdir = $(libdir)/ruby/$(ruby_version)
archdir = $(rubylibdir)/$(arch)
sitedir = $(libdir)/ruby/site_ruby
sitelibdir = $(sitedir)/$(ruby_version)
sitearchdir = $(sitelibdir)/$(sitearch)
includedir = $(prefix)/include
mandir = $(datarootdir)/man

CC = gcc
AR = ar
LD = $(CC)
RANLIB = ranlib
RUBY = $(RUBY_INSTALL_NAME)

CFLAGS = -g -O2 $(cflags)  -fPIC -Wall -I. -I$(hdrdir)
LDFLAGS = -L.  -rdynamic -Wl,-export-dynamic
LIBS = -lrt -ldl -lcrypt -lm 
XLDFLAGS =  -L$(libdir)
DLDFLAGS = 
LDSHARED = $(CC) -shared
EXT_DLDFLAGS = 
INSTALL_PROGRAM = $(RUBY) -r ftools -e 'File.install ARGV[0], ARGV[1], 0755, true'
INSTALL_DLLIB = $(RUBY) -r ftools -e 'File.install ARGV[0], ARGV[1], 0555, true'
INSTALL_DATA = $(RUBY) -r ftools -e 'File.install ARGV[0], ARGV[1], 0644, true'
INSTALL_DIR = $(RUBY) -r ftools -e 'File.makedirs(*ARGV)'

RUBY_INSTALL_NAME = ruby
LIBRUBYARG = $(LIBRUBYARG_STATIC)
LIBRUBYARG_SHARED = -Wl,-R -Wl,$(libdir) -L$(libdir) 
LIBRUBYARG_STATIC = -l$(RUBY_SO_NAME)-static
LIBRUBY = $(LIBRUBY_A)
LIBRUBY_A = lib$(RUBY_SO_NAME)-static.a
RUBY_SO_NAME = ruby
EXT_LIBRUBYARG = 

RM = $(RUBY) -e "ARGV.each {|f|File.unlink(f) rescue Errno}"

DEFFILE = 

ERUBY = eruby
DLLIB = eruby.so
MANPAGE = eruby.1

MAJOR = 1
MINOR = 0
TEENY = 5
MAJOR_MINOR = 10
VERSION = $(MAJOR).$(MINOR).$(TEENY)
TAG = release_$(MAJOR)_$(MINOR)_$(TEENY)

LIBERUBY_A = liberuby.a
LIBERUBY_SO = liberuby.so.$(MAJOR).$(MINOR).$(TEENY)
LIBERUBY_ALIASES = liberuby.so
LIBERUBY = ${LIBERUBY_A}
LIBERUBYARG = $(LIBERUBY_A)
.SUFFIXES: .o .c .rd .1

LIBERUBY_OBJS = eruby_lib.o
OBJS = eruby_logo.o eruby_main.o
EXT_OBJS = eruby_ext.o

.c.o:
	$(CC) $(CFLAGS) -c $<

all: $(LIBERUBY_A) $(ERUBY) $(DLLIB) $(MANPAGE) Makefile

install: install-main
	@-$(INSTALL_DIR) $(archdir)
	@-$(INSTALL_DLLIB) $(DLLIB) $(archdir)

site-install: install-main
	@-$(INSTALL_DIR) $(sitearchdir)
	@-$(INSTALL_DLLIB) $(DLLIB) $(sitearchdir)

install-main: all
	@-$(INSTALL_DIR) $(bindir)
	@-$(INSTALL_DIR) $(libdir)
	@-$(INSTALL_DIR) $(includedir)
	@-$(INSTALL_DIR) $(mandir)/man1
	@-$(INSTALL_PROGRAM) $(ERUBY) $(bindir)/$(ERUBY)
	@-if [ -f $(LIBERUBY_SO) ]; then \
		$(INSTALL_DATA) $(LIBERUBY_SO) $(libdir)/$(LIBERUBY_SO); \
		cd $(libdir); \
		$(RUBY) -e 'ARGV.each{|link| File.delete link \
			if File.exist? link; \
			File.symlink "$(LIBERUBY_SO)", link}' \
			$(LIBERUBY_ALIASES); \
	fi
	@-$(INSTALL_DATA) $(LIBERUBY_A) $(libdir)/$(LIBERUBY_A)
	@-$(INSTALL_DATA) $(srcdir)/eruby.h $(includedir)/eruby.h
	@-$(INSTALL_DATA) $(srcdir)/$(MANPAGE) $(mandir)/man1/$(MANPAGE)

clean:
	$(RM) $(ERUBY)
	$(RM) $(DLLIB)
	$(RM) $(LIBERUBY_A)
	$(RM) $(LIBERUBY_SO)
	$(RM) $(LIBERUBY_ALIASES)
	$(RM) $(LIBERUBY_OBJS)
	$(RM) $(OBJS)
	$(RM) $(EXT_OBJS)
	$(RM) $(DEFFILE)
	$(RM) eruby.imp

distclean: clean
	$(RM) config.h
	$(RM) Makefile
	$(RM) *~

tag:
	cvs tag $(TAG)

force_tag:
	cvs tag -F $(TAG)

dist:
	cvs export -r $(TAG) -d eruby-$(VERSION) eruby
	tar zcf ../eruby-$(VERSION).tar.gz eruby-$(VERSION)
	rm -rf eruby-$(VERSION)

$(LIBERUBY_A): $(LIBERUBY_OBJS)
	$(AR) rcu $@ $(LIBERUBY_OBJS)
	@-$(RANLIB) $@ 2> /dev/null || true

$(LIBERUBY_SO): $(LIBERUBY_OBJS)
	$(LDSHARED) $(DLDFLAGS) $(XLDFLAGS) $(LIBERUBY_OBJS) \
		$(EXT_LIBRUBYARG) $(LIBS) -o $@
	@-$(RUBY) -e 'ARGV.each{|link| File.delete link if File.exist? link; \
		File.symlink "$(LIBERUBY_SO)", link}' $(LIBERUBY_ALIASES)

$(ERUBY): $(OBJS) $(LIBERUBY)
	$(LD) $(LDFLAGS) $(XLDFLAGS) $(OBJS) $(LIBERUBYARG) $(LIBRUBYARG) $(LIBS) -o $@

$(DLLIB): $(EXT_OBJS) $(LIBERUBY)
	$(LDSHARED) $(EXT_DLDFLAGS) -o $(DLLIB) $(EXT_OBJS) $(XLDFLAGS) $(LIBERUBYARG) $(EXT_LIBRUBYARG) $(LIBS)

$(MANPAGE): eruby.rd

.rd.1:
	$(RUBY) -S rd2 -r rd/rd2man-lib -o $* $<
	$(RUBY) -i~ -ne 'print if ~/.+/' $@
	$(RM) $@~

eruby_logo.c: eruby_logo.png
	$(srcdir)/bin2c $(srcdir)/eruby_logo.png
eruby_lib.o: eruby_lib.c eruby.h config.h
eruby_logo.o: eruby_logo.c eruby_logo.h
eruby_main.o: eruby_main.c eruby.h eruby_logo.h
eruby_ext.o: eruby_ext.c eruby.h
