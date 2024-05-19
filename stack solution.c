#include <stdio.h> //Include Files
#include <stdlib.h>
#define MAXSTACK 5 //Define clauses
#define TRUE 1
#define FALSE 0
typedef int stackEntry;
typedef struct { //Defining struct Stack
 int top;
 stackEntry entry[MAXSTACK];
 }Stack;
void createStack(Stack *s); //Create Stack
int isStackEmpty(Stack *s); //Check isStackEmpty
int isStackFull(Stack *s); //Check isStackFull
void push(stackEntry item, Stack *s); //Push into Stack Function
void pop(stackEntry *item, Stack *s); //Pop from Stack Function
int main() { //Main Program
 int item[5], oitem[5], i, j;
 Stack *s;
 createStack(&s); //CreateStack Function Call
 for (i=0; i<10; i++) {
 printf("Please Enter Stack Item\n");
 scanf("%d", &item[i]); //Scan Stack Item
 printf("%d\n", item[i]);
 push(item[i], &s); //Push Function Call
 pop(oitem[j], &s); //Pop Function Call
 }
 return 0;
};
void createStack(Stack *s) //CreateStack Function
{
 s->top = -1;
 printf ("%d\n",s->top);
 printf("StackCreated \n");
};
int isStackEmpty(Stack *s) //isStackEmpty Function
{
 if (s->top == -1)
 return(TRUE);
 else return(FALSE);
};
int isStackFull(Stack *s) //isStackFull Function
{
 if (s->top == MAXSTACK - 1)
 return(TRUE);
 else return(FALSE);
};
void push(stackEntry item, Stack *s) //Push Function
{
 if(!isStackFull(s))
 {
 s->top++;
 s->entry[++s->top]=item;
 printf ("Item %d Pushed into Stack\n", item);
 }
 else{
 printf("---Stack is Full !!! ---");
exit(1);
 }
};
void pop(stackEntry *item, Stack *s) //Pop Function
{
 if(!isStackEmpty(s)) {
 *item=s->entry[s->top--];
 printf("The Item Popped out is : %d\n", *item);
 }
 else{
 printf("---Stack is Empty !!! ---");
exit(1);
}
}
