all this is just for me to learn to program in C and analyzing it with GDB  
when you give mem_size 0 the last free will be like this:
robort@Programing:~/Documents/Programing$ ./memory_allocting_Version2 robort
  the result: 
    [+]Allcating 0 byte of memory for char_ptr
  char_ptr at (0x8654008) --> This memory is located in the heap
    [+]Allocating another 15 byte of for int_ptr
  int_ptr (0x8654018) --> 31731
    [-]Freeing char_ptr
    [+]Allcating 30 bytes of memory for char_ptr
  char_ptr (0x8654030) --> New Memory
    [-]Freeing int_ptr
    [-]Freeing char_ptr
  *** Error in `./memory_allocting_Version2': free(): invalid next size (fast): 0x08654030 ***
    Aborted

    okay lets run this with GDB and make break on the last free():
robort@Programing:~/Documents/Programing$ gdb -q ./memory_allocating_Version2
    Reading symbols from ./memory_allocting_Version2...done.
  (gdb) list
  34		
  35		strcpy(char_ptr, "New Memory");
  36		printf("char_ptr (%p) --> %s\n", char_ptr, char_ptr);
  37		
  38		printf("\t[-]Freeing int_ptr\n");
  39		free(int_ptr);
  40		printf("\t[-]Freeing char_ptr\n");
  41		free(char_ptr);
  42		
  43	}
  (gdb) break 41
   Breakpoint 1 at 0x80486f2: file memory_allocting_Version2.c, line 41.
  (gdb) run robort
  Starting program: /home/robort/Documents/Programing/memory_allocting_Version2 robort
	[+]Allcating 0 byte of memory for char_ptr
char_ptr at (0x804b008) --> This memory is located in the heap
	[+]Allocating another 15 byte of for int_ptr
int_ptr (0x804b018) --> 31731
	[-]Freeing char_ptr
	[+]Allcating 30 bytes of memory for char_ptr
char_ptr (0x804b030) --> New Memory
	[-]Freeing int_ptr
	[-]Freeing char_ptr

Breakpoint 1, main (argc=2, argv=0xbffff2d4) at memory_allocting_Version2.c:41
41		free(char_ptr);
(gdb) bt full
#0  main (argc=2, argv=0xbffff2d4) at memory_allocting_Version2.c:41
        char_ptr = 0x804b030 "New Memory"
        int_ptr = 0x804b018
        mem_size = 30
(gdb) x/xw 0x804b030
0x804b030:	0x2077654e
(gdb) x/xw 0x2077654e
0x2077654e:	Cannot access memory at address 0x2077654e
(gdb) continue
Continuing.
*** Error in `/home/robort/Documents/Programing/memory_allocting_Version2': free(): invalid next size (fast): 0x0804b030 ***

Program received signal SIGABRT, Aborted.
0xb7fdccf9 in ?? ()

okey i konw the resone why the program crashed you have to put if stement to make mem_size beger then 30 or 30 
becuse you will be puting this string "This memory is located in the heap"
the program last version will be version3
