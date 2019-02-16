#include "struct.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <commons/collections/list.h>

t_libro * crear_libro(char * nombre){
	t_libro * libro = malloc(sizeof(t_libro));
	(*libro).nombre = strdup(nombre);
	return libro;
}

void eliminar_libro(t_libro * libro){
	free(libro -> nombre);
	free(libro);
}

void cargarLibro(t_list * list, t_libro * libro){
	list_add(list, libro);
}

void listarLibros(t_list * list){
	int listSize = list_size(list);
	for (int i = 0; i < listSize; i++){
		t_libro *libro = list_get(list, i);
		printf("%s/n", libro->nombre);
	}
}

