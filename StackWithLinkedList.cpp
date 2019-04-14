#include<iostream>
using namespace std;
 
 

struct node
{
    int data;
    struct node *next;
};
 
class stack
{
    struct node *atas;
    public:
    stack() 
    {
        atas=NULL;
    }
    void push(); 
    void pop();  
    void show(); 
};

void stack::push()
{
    int value;
    struct node *ptr;
    cout<<"\n INPUT / PUSH STACK ";
    cout<<"Masukkan Angka yang anda ingin input: ";
    cin>>value;
    ptr=new node;
    ptr->data=value;
    ptr->next=NULL;
    if(atas!=NULL)
        ptr->next=atas;
    atas=ptr;
    cout<<"\nAngka sudah dimasukkan dalam stack :)";
 
}
 

void stack::pop()
{
    struct node *temp;
    if(atas==NULL)
    {
        cout<<"\nIsi Stack Masih Kosong";
    }
    temp=atas;
    atas=atas->next;
    cout<<"\nOperasi........\nilai dari POP adalah "<<temp->data;
    delete temp;
}
 

void stack::show()
{
    struct node *ptr1=atas;
    cout<<"\nStacknya Adalah :\n";
    while(ptr1!=NULL)
    {
        cout<<ptr1->data<<" ->";
        ptr1=ptr1->next;
    }
    cout<<"NULL\n";
}
 

int main()
{
    stack s;
    int choice;
    while(1)
    {
        cout<<"\n-----------------------------------------------------------";
        cout<<"\n\t\tIMPLEMENTASI STACK DENGAN MENGGUNAKAN LINKED LIST\n\n";
        cout<<"\n-----------------------------------------------------------";
       
        cout<<"1:PUSH\n2:POP\n3:MENAMPILKAN STACK\n4:EXIT";
        cout<<"\nMASUKKAN PILIHAN MU (1-4): ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                s.push();
                break;
            case 2:
                s.pop();
                break;
            case 3:
                s.show();
                break;
            case 4:
                return 0;
                break;
            default:
                cout<<"\nMAAF PILIHAN ANDA SALAH COBA LAGI(1-4)!!";
                break;
        }
    }
    return 0;
}
