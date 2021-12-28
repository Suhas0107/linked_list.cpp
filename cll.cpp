#include<iostream>
using namespace std;
class SS
{
   struct node
   {
      node *link;
      int data;
   };
    
  node *front,*rear,*q;
 public: SS()
{
    front=NULL;
}
 
 void andrew(int num)
  {
      if(front==NULL)
        {
      q= new node;
      q->data=num;
      front=rear=q;
      rear->link=front;
    }
else
       {
         q=new node;
         q->data=num;
         rear->link=q;
         rear=q;
         rear->link=front;
      }
}
  void disp()
{
     node *S,*P;
     S=front;
  /*   P=NULL;
    while(S!=P)
{
     cout<<S->data<<endl;
    
     S=S->link;
    P=front;
} */
   cout<<S->data<<endl;
   S=S->link;
   P=front;
   while(S!=P)
{
    cout<<S->data<<endl;
    S=S->link;
}

}

};
int main()
  {
     SS obj;
         obj.andrew(1);
         obj.andrew(2);
         obj.andrew(3);
         obj.andrew(4);
obj.andrew(5);
         obj.disp();
         return 0;
}

 
     
     
     
  
  
