compile: main.c 
	 gcc main.c -o Tonkwan

run: Tonkwan
	 ./Tonkwan

clean: Tonkwan
	 rm Tonkwan
