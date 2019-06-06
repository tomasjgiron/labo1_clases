/*
    utest example : Unit test examples.
    Copyright (C) <2018>  <Mauricio Davila>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef __LINKEDLIST
#define __LINKEDLIST
struct Node
{
    void* pElement;
    struct Node* pNextNode;
}typedef Node;

struct LinkedList
{
    Node* pFirstNode;
    int size;
}typedef LinkedList;
#endif



//Publicas
LinkedList* ll_newLinkedList(void);
int ll_len(LinkedList* this);///1er manera: tener un contador de size para no tener que recorrer todo el array. 2da manera: en caso de que sea corto la funcion devuelve el tamaño

Node* test_getNode(LinkedList* this, int nodeIndex);
int test_addNode(LinkedList* this, int nodeIndex,void* pElement);

int ll_add(LinkedList* this, void* pElement);///recibe el puntero y agrega
void* ll_get(LinkedList* this, int index);///pedir un elemento de la lista
int ll_set(LinkedList* this, int index,void* pElement);///reemplaza un puntero en un nodo existente
int ll_remove(LinkedList* this,int index);///quita un elemento de la lista
int ll_clear(LinkedList* this);///vuelve a la lista al estado original
int ll_deleteLinkedList(LinkedList* this);///elimina la lista
int ll_indexOf(LinkedList* this, void* pElement);///devuleve un indice a traves de un puntero que se le pasa
int ll_isEmpty(LinkedList* this);///saber si la lista esta vacia
int ll_push(LinkedList* this, int index, void* pElement);///meter un elemento entre dos nodos ya existentes
void* ll_pop(LinkedList* this,int index);///permite quitar un elemento de la lista, pero devuelve el contenido del nodo
int ll_contains(LinkedList* this, void* pElement);///devuelve verdadero o falso a la pregunta de si cierto elemento esta dentro de la lista
int ll_containsAll(LinkedList* this,LinkedList* this2);///verdadero o falso a la pregunta si this2 esta contenido en this
LinkedList* ll_subList(LinkedList* this,int from,int to);///obtener un pedazo de la lista seteando un desde y un hasta
LinkedList* ll_clone(LinkedList* this);///un deep copy de la lista original, lo cual te provee una nueva lista usando todos los mismos datos
int ll_sort(LinkedList* this, int (*pFunc)(void* ,void*), int order);///funcion de ordenamiento de alguna lista. Lo nuevo es el puntero a funcion que servira como criterio de ordenamiento
