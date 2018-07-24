#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
};
class node* start;
class linkedlist{
public:
  linkedlist()
  {
      start=NULL;
  }
  void insertbeg();
  void insertend();
  void print();
  void deletebeg();
  void deleteend();
};
void linkedlist::deleteend()
{
    class node* temp=start;
    class node* prev=NULL;
    if(temp==NULL)
        cout<<"List not found!\n";
    else if(temp->next==NULL)
    {
        start=NULL;
        delete(temp);
    }
    else{
        while(temp->next!=NULL)
        {
            prev=temp;
            temp=temp->next;
        }
        prev->next=temp->next;
    }
}
void linkedlist::deletebeg()
{
    class node* temp=start;
    if(temp==NULL)
        cout<<"List not found!\n";
    else
    start=temp->next;
    delete(temp);
}
void linkedlist::insertend()
{
    class node* temp=start;
    cout<<"Enter the data: ";
    temp=new(struct node);
    cin>>temp->data;
    temp->next=NULL;
    if(start==NULL)
    {
        start=temp;
    }
    else{
        struct node* temp1=start;
        while(temp1->next!=NULL)
        {
            temp1=temp1->next;
        }
        temp1->next=temp;
    }
}
void linkedlist::print()
{
    class node* temp=start;
    if(start==NULL)
        cout<<"No list found";
    else
    {
        while(temp->next!=NULL)
        {
            cout<<temp->data<<"<-";
            temp=temp->next;
        }
        cout<<temp->data;
    }
    cout<<"\n";
}
void linkedlist::insertbeg()
{
    int data;
    cout<<"Enter the data: ";
    cin>>data;
    class node* temp=NULL;
    temp=new(class node);
    temp->data=data;
    if(start==NULL)
    {
        start=temp;
        temp->next=NULL;
    }
    else{
        temp->next=start;
        start=temp;
    }
    cout<<"Insertion completed!\n";
}
int main()
{
    linkedlist s1;
    while(1){
        cout<<"********************************\n";
        cout<<"What do you want to do: \n";
        cout<<"1.Insert at the begining: \n";
        cout<<"2.Insert at the end: \n";
        cout<<"3.Delete begining: \n";
        cout<<"4.Delete end: \n";
        cout<<"5.Print the data: \n";
        cout<<"6.Exit\n";
        cout<<"********************************\n";
        cout<<"Enter the option: ";
        int option;
        cin>>option;
        /*if(option==1)
            s1.insertbeg();
        else if(option==2)
            s1.insertend();
        else if(option==3)
            s1.deletebeg();
        else if(option==4)
            s1.deleteend();
        else if(option==5)
            s1.print();
        else if(option==6)
            return 1;*/
        switch(option)
        {
            case 1: s1.insertbeg();
                break;
            case 2: s1.insertend();
                break;
            case 3: s1.deletebeg();
                break;
            case 4: s1.deleteend();
                break;
            case 5: s1.print();
                break;
            default:
                return 1;
        }
    }
}
