
objects = kingdom.c kingdom.h main.c
		
kingdom : $(objects)
		cc -o kingdom $(objects) `pkg-config --cflags gtk+-3.0` `pkg-config --libs gtk+-3.0`



