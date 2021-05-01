CC = gcc

CFLAGS = -Wall -I./include -L./lib #I include L library

SRCDIR = src
OBJDIR = obj
SRCS = $(filter-out src/generic_test.c ,$(wildcard $(SRCDIR)/*.c)) #wildcard-> SRCDIR içindeki tüm .c uzantılı dosyaları al
#filter-out -> src/generic_test.c dosyasını virgülden sonraki dosyanın içinden çıkar

OBJS = $(SRCS:$(SRCDIR)/%.c=$(OBJDIR)/%.o)   # SRCS içindeki dosyaların .c uzantılı olanlarını al .o olarak kaydet

all: avlnew skptest sstest bitest #derle

lib/libtests.a: $(OBJS)
	@mkdir -p lib
	ar rcs lib/libtests.a $^
	ranlib lib/libtests.a
	
#@rm -rf $(OBJDIR)

avlnew: test/avltest.c lib/libtests.a
	$(CC) $(CFLAGS) $< -o $@ -ltests

skptest: test/skiptest2.c lib/libtests.a
	$(CC) $(CFLAGS) $< -o $@ -ltests

sstest: test/shelltest.c lib/libtests.a
	$(CC) $(CFLAGS) $< -o $@ -ltests

bitest: test/bitonictest.c lib/libtests.a
	$(CC) $(CFLAGS) $< -o $@ -ltests

# @D = çıktıdaki directory = objdir
$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@mkdir -p $(@D) 							
	$(CC) $(CFLAGS) $< -c -o $@

clean:
	@rm -rf $(OBJDIR) avlnew skptest sstest bitest lib

#1:34 nisan12 testvoid oluşturuyor
