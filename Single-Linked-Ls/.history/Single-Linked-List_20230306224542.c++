#include "iostream"
using namespace std;


//===> Our Struct Node
struct Node{
    int data;
    struct Node *next;
}

void Crt_Fr_Nd(Node *head,int value){
  
  head -> data = value; // Make the value of the firsr

  head -> next = NULL;

}



int main(){




}