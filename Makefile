obj-m += hello.o

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean

test: all
	sudo /sbin/insmod hello.ko
	sudo /sbin/rmmod hello.ko
	sleep 1 && dmesg |tail -2

