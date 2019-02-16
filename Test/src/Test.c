/*
 ============================================================================
 Name        : Test.c
 Author      : Lucas
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <commons/collections/list.h>

#include "struct.c"



int main(void) {
	t_list *list = list_create();
	cargarLibro(list, crear_libro("libro1"));
	cargarLibro(list, crear_libro("libro2"));
	listarLibros(list);

	return EXIT_SUCCESS;
}
