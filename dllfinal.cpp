#include"iostream"
using namespace std;
class doub
{
    struct node
    {
        node *nxt,*pre;
        int data;
    };
    node *p,*t;
    public: doub()
            {
                p=NULL;
            }
    void create(int num)
    {
        node *r;
        if(p==NULL)
        {
            t=new node;
            t->data=num;
            t->pre=NULL;
            t->nxt=NULL;
            p=t;
        }
        else
        {
            r=new node;
            r->data=num;
            r->nxt=NULL;
            r->pre=t;
            t->nxt=r;
            t=t->nxt;
        }
    }
    void display()
    {
        node *t=p;
        while(t!=NULL)
        {
            cout<<t->data<<endl;
            t=t->nxt;
        }
    }

    void add(int num)
    {
        t=new node;
        t->data=num;
        t->pre=NULL;
        t->nxt=p;
        p->pre=t;
        p=t;
        doub::display();
}
    void last(int num)
  {
       t=p;
       node *r;
       
       r= new node;
       r->data = num;
       while(t-> nxt!= NULL)
   {
        t=t-> nxt;
    }
   r-> nxt=NULL;
   r->pre=t;
   t-> nxt=r;
   doub::display();
  
}
void addint(int num, int loc)
{
    t=p;
    node *r;
    r=new node;
    r->data=num;
    for(int i=1;i<loc;i++)
    {
        t=t->nxt;
    }
    r->nxt=t->nxt;
    r->pre=t;
    t->nxt->pre=r;
    t->nxt=r;
    doub::display();
}
void del(int num)
{
   t=p;
   node *r;
   r=t->nxt;
   if(p->data==num)
    {
       p=p->nxt;
       p->pre=NULL;
       delete(t);
doub::display();
     }
   else
      {
         while(r->data!=num)
        {
            t=t->nxt;
            r=r->nxt;
         }
      if( r->nxt==NULL)
    {
          t->nxt=NULL;
          delete(r);
doub::display();
    }
  else
    {
      t->nxt=r->nxt;
      r->nxt->pre=t;
      delete(r);
doub::display();
      }
}
    
} 
          
            

};
       
int main()
{
     doub dell;
     dell.create(5);
    dell.create(7);
    dell.create(8);
     dell.display();
cout<<endl;
     dell.add(0);
     dell.last(9);
cout<<endl;
    dell.addint(6,2);
cout<<endl;
    dell.del(0);

cout<<endl;
    dell.del(9);
cout<<endl;
    dell.del(7);
    return 0;
 }
            
