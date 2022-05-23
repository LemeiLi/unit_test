
BUILD_STRING	= $(shell date +"%x %T")
__BUILD_STRING__="\"$(BUILD_STRING)\""

all:
	gcc -D__BUILD_STRING__=$(__BUILD_STRING__)  Define.c
	
