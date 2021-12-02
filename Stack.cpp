#include <iostream>

using namespace std;

typedef struct node{

	int data;
	struct node *next;
}NODE, *PNODE;

class Stack{    //Singly Linear Linked List

private:
	PNODE first;
	int size;

public:

    Stack(){

	    first = NULL;
        size = 0;
   }

   void push(int no){ //InsertFirst()

   }

   int pop(){   //DeleteFirst()

   }

   void Display(){

   }

   int Count(){

   	   return size;
   }
};   