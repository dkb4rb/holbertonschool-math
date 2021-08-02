comp :
	gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format -g *.c

comp-1 :
	gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format -g 3-main.c 3-argument.c -lm

comp-2 :
	gcc -g math.c

comp-holb :
	gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c

comp-holb- : 
	gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c

chown : 
	sudo chown dkbarb10 *

clean :
	rm -f math *.o *.gch *.out

run : 
	./a.out