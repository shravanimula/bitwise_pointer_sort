a.out:main.o get.o set.o clr.o toggle.o swap.o least.o most.o
	cc main.o get.o set.o clr.o toggle.o swap.o least.o most.o
main.o:main.c
	cc -c main.c
get.o:get.c
	cc -c get.c
set.o:set.c
	cc -c set.c
clr.o:clr.c
	cc -c clr.c
toggle.o:toggle.c
	cc -c toggle.c
swap.o:swap.c
	cc -c swap.c
least.o:least.c
	cc -c least.c
most.o:most.c
	cc -c most.c
