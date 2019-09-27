#include<iostream>
using namespace std;

class node{

public:
 
 int data;
 node *link;

};

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

class linkedlist{

 node *head;

 public:
  
 // Default constructor
 
 linkedlist()
 {
    head = NULL;
 }

 // Add node member function

 void addnode(int num)
 {
    // Create a new node
   
    node *temp = new node;
   
    // Adding data to node
   
    temp->data = num;
 
    // Point the link to NULL
  
    temp->link = NULL;
  
    // validate whether data is already there
 
    if(head == NULL)
     {
        head = temp;
     }
    else
     {
        node *ptr1 = head;
             
        while(ptr1->link != NULL)
         {
            ptr1 = ptr1->link;     
         }
       
        ptr1->link = temp;     
  
     }
  }
  
 // Display member function
  
 void display()
 {
    node *ptr2 = head;

     while(ptr2 != NULL)
     {
        cout<<ptr2->data<<" --> ";

        ptr2 = ptr2->link;
     }
    
     cout<<endl; 
   
 }    

};

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

int main()
{
  linkedlist l1;

  int value, data, choice;      

do{

  cout<<"Press 1 to add data"<<endl<<"Press 2 to display"<<endl;
  cin>>value;

  switch(value)
  {
     case 1 :
      {
           cout<<"Please enter the data to add"<<endl<<endl;
           cin>>data;
           l1.addnode(data);
           break;
      }

     case 2 :
      {
           l1.display();
           break;
      }
   
     default :
      {
          cout<<"No such options"<<endl<<endl;
      }
   }
   
   cout<<"Do you want to continue"<<endl;
   cin>>choice;
 
}while(choice);

  return 0; 
} 





