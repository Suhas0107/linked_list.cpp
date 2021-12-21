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
      void addl(int num)
    {
       t=p;
       node *r;
       r=new node;
       r->data=num;
       while(t!=NULL)
       {
              t=t->nxt;
        }
        r->nxt=NULL:
            
       
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
    return 0;
 }
            
