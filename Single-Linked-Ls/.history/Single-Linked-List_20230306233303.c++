#include "iostream"
#include <ctime>
using namespace std;



// <=============== Global Variables For Our Programm  =============>


//===> Our Struct Node
struct Node{
    int data;
    struct Node *next;
};

// Don't Focus at here as it work at our OS with Linked 
// List too but i define it to get our year dynamically
time_t now = time(0);
tm *ltm = localtime(&now);
int first_value; // Make the first data 
int counter; // Make the first data 
Node *head = new Node; // Make our Head 





void Crt_Frst_Nd(Node *head,int value){
  
  head -> data = value; // In this step we create the value held by the first node it points from our head

  head -> next = NULL; // After that we need our firts node points to Null as we dont have any node yet 

}

void Insert_Nw_Nd(Node *head,int value){
    Node *newNode = new Node;

    newNode -> data = value; // Append Data for our new Node
    newNode -> next = NULL; // Make Our New Node Point At Null as it will be the last Node   

    Node *curr = head; // Make shadow from our head to point in last current Node in our List 


    while (curr){
        if(curr -> next == NULL){ // Check if we arrived at the last Node or Not
            curr -> next = newNode; // After that we will insert our node 
            cout << "Your Node Inseted Successfully at location : " << curr-> next << endl;
            return; 
        }
        curr = curr -> next; // make our current stop at our new node 
    }
    
}


Node *Srch_Nd(Node *head,int value){

    Node *curr = head; //Make Shadow from our first element in the node to avoid lost our head

    while(curr){
        if(curr -> data == value){ // check node step by step
            return curr; // return the adrress of our node
        }
        curr = curr -> next; // sheft our shadow element to the next node
    }   

}


void Dlt_Nd(Node *p,Node *head){

   // check if this node is exist or not
   if(p == NULL){
      cout << "This Node Not Exist ! \n";
      return;
   }
   //this special case as this node will be the first node so we need change our head to the next node to save our list from losting
   if(p == head){
      cout << "Node in location : " << head -> next << " Deleted Successfully \n";
      head = p -> next;
      delete p;
      return;
   }

    Node *curr = head;//Make Shadow from our first element in the node to avoid lost our head

    //we will make simple loop to  check node step by step and delete our target
     while (curr)
     {
       if(curr -> next == p){
          cout << "Node in location : " << curr -> next << " Deleted Successfully \n";
          curr -> next = p -> next;  // sheft our current to the next node
          delete p;//affter that we will delete the node 
       }
       curr = curr -> next;// our count for the loop
     }
     
}


void Options(char opt){
    switch (opt)
    {
    case "a":
        cout << "Please Enter The Start Point of Year : \n";
        cin >> counter;
        cout << endl;
         cout << "Please Enter Your First Value of the node : \n";
            cin >>  first_value;
            cout << endl;


 Crt_Frst_Nd(head,1);// create first node

 while(counter < 1900 + ltm->tm_year){
      Insert_Nw_Nd(head,counter);
      counter++;
 }


        break;
    
    default:
        break;
    }
}


int main(){





 




  



}