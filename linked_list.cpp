#include<iostream>
using namespace std;
  class yoyo
{

 struct node
     {
         int data;
          node *link;
     };

    node *p;
 public:
           yoyo()
{
      p=NULL;
}
 
void cre(int num)
{
    node *temp;
    if(p==NULL)
    {
        temp=new node;
        temp->data=num;
        temp->link=NULL;
        p=temp;
    }
else
   {
    node *a;
    a=new node;
    a->data=num;
    a->link=NULL;
    temp->link=a;
    temp=temp->link;
   }
}
 
void display()
 {
      node *c;
      c=p;
      while(c!=NULL)
{
    cout<<c->data<<endl;
    c=c->link;
}
}
        void addbeg(int num)
           {
                 node *f;
                 f=new node;
                 f->data=num;
                 f->link=p;
                 p=f;
            }
 void addmid(int num,int loc)
           {
                 node *d,*t;
                 t=p;

                 d=new node;
                 d->data=num;
                for(int i=1; i<loc; i++)
                   {
                     t=t->link;
                    }
                d->link=t->link;
                t->link=d;
              }  

     void counting()
      {
           node *s;
            int cou;
            s=p;
            while(s!=NULL)
            {
                s=s->link;
                cou++;
            }
            cout<<cou<<endl;
        }
                           
                 
            
        
        
  
};

int main()
{
   yoyo honey;
   honey.cre(1);
   honey.cre(6);
   honey.cre(16);
   honey.display();
   cout<<endl;
   honey.addbeg(0);
   honey.display();
    cout<<endl;
   honey.addmid(9,3);
   honey.display();
    cout<<endl;
    honey.counting();
return 0;
}

   
