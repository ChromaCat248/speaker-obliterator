KDIR ?= /lib/modules/`uname -r`/build
obj-m += speaker-obliterator.o

all:
	make -C $(KDIR) M=$(PWD) modules

clean:
	make -C $(KDIR) M=$(PWD) clean
