build:
	gcc $(CFLAGS) -c src/task.c -o appendix/main.o
	gcc $(CFLAGS) -c src/c.c -o appendix/c.o
	gcc appendix/*.o -o exe/run

clean:
	rm -rf appendix/*.o exe/exe_runner

rebuild: clean build