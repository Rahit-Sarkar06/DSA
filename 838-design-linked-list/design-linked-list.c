

#include <stdio.h>
#include <stdlib.h>
typedef struct MyLinkedList {
    int val;
    struct MyLinkedList* next;
} MyLinkedList;

MyLinkedList* myLinkedListCreate() {
    MyLinkedList* t;
    t = (MyLinkedList*)malloc(sizeof(MyLinkedList));
    t->next = NULL;
    return t;
}

int myLinkedListGet(MyLinkedList* obj, int index) {
    int p = 0;
    MyLinkedList* c = obj->next;
    while (c != NULL && p != index) {
        p++;
        c = c->next;
    }
    if (c == NULL)
        return -1;
    return c->val;
}

void myLinkedListAddAtHead(MyLinkedList* obj, int val) {
    MyLinkedList* c = (MyLinkedList*)malloc(sizeof(MyLinkedList));
    c->val = val;

    c->next = obj->next;
    obj->next = c;
}

void myLinkedListAddAtTail(MyLinkedList* obj, int val) {
    MyLinkedList* c = obj;

    while (c->next != NULL)
        c = c->next;

    MyLinkedList* t = (MyLinkedList*)malloc(sizeof(MyLinkedList));
    t->val = val;
    t->next = NULL;

    c->next = t;
}

void myLinkedListAddAtIndex(MyLinkedList* obj, int index, int val) {
    MyLinkedList* prev = obj;
    int p = 0;

    while (prev != NULL && p < index) {
        prev = prev->next;
        p++;
    }

    if (prev == NULL)
        return;

    MyLinkedList* t = (MyLinkedList*)malloc(sizeof(MyLinkedList));
    t->val = val;

    t->next = prev->next;
    prev->next = t;
}

void myLinkedListDeleteAtIndex(MyLinkedList* obj, int index) {
    MyLinkedList* prev = obj;
    int p = 0;

    while (prev->next != NULL && p < index) {
        prev = prev->next;
        p++;
    }

    if (prev->next == NULL)
        return;

    MyLinkedList* temp = prev->next;
    prev->next = temp->next;
    free(temp);
}

void myLinkedListFree(MyLinkedList* obj) {
    while (obj != NULL) {
        MyLinkedList* temp = obj;
        obj = obj->next;
        free(temp);
    }
}

/**
 * Your MyLinkedList struct will be instantiated and called as such:
 * MyLinkedList* obj = myLinkedListCreate();
 * int param_1 = myLinkedListGet(obj, index);

 * myLinkedListAddAtHead(obj, val);

 * myLinkedListAddAtTail(obj, val);

 * myLinkedListAddAtIndex(obj, index, val);

 * myLinkedListDeleteAtIndex(obj, index);

 * myLinkedListFree(obj);
*/