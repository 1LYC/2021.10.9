mybin:main.o mytest.o
	gcc $^ -o $@ 
%.o:%.c
	gcc -c $<

.PHONY:clean
clean:
	rm -f mybin main.o mytest.o
