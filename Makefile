biblioteca *.c *h
	cd
	cd Documentos
	cd biblioteca_PC1 	
	gcc main.c livro.c vetor.c arquivo.c -o biblioteca
	./biblioteca

clean
	rm -f biblioteca	