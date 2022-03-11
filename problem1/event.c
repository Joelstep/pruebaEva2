#include "event.h"
#include <string.h>
#include <stdlib.h>
//#include <stdio.h>

Event *CreateEvent(char *name)
{
    Event *a = malloc(sizeof(Event));
    // En name tenemos la dirección del primer caracter del nombre
    // Entonces debo COPIAR cada caracter al arreglo llamado eventName

    (a->eventName) = name;

    a->next = NULL;

    return a;
}

void DestroyEvent(Event *this)
{
    free(this);
}
