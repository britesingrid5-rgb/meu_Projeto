biblioteca_PC1 *.c *.h
	gcc main.c livro.c vetor.c arquivo.c -o biblioteca
	./biblioteca

clean
	rm -f biblioteca	