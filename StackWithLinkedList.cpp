#include <iostream>
using namespace std;
struct Node { 
   int data; 
   struct Node *next; 
}; 
struct Node* atas = NULL; 
void push(int val) {
   struct Node* nodebaru = (struct Node*) malloc(sizeof(struct Node)); 
   nodebaru->data = val; 
   nodebaru->next = atas; 
   atas = nodebaru; 
}
void pop() {
   if(atas==NULL)
      cout<<"Stack Underflow"<<endl;
   else {
      cout<<"Elemen Yang Dihilangkan Adalah "<< atas->data <<endl;
      atas = atas->next;
   }
}
void display() {
   struct Node* ptr;
   if(atas==NULL)
      cout<<"Stack Kosong";
   else {   
      ptr = atas; 
      cout<<"Elemen Dari Stack Adalah: ";
      while (ptr != NULL) { 
         cout<< ptr->data <<" "; 
         ptr = ptr->next; 
      } 
   }
   cout<<endl;
}
int main() {
   int ch, val; 
   cout<<"1) Masukkan elemen Ke stack"<<endl;
   cout<<"2) Hilangkan elemen dari stack"<<endl;
   cout<<"3) Tampilkan stack"<<endl;
   cout<<"4) Keluar"<<endl;
   do {
      cout<<"Masukkan Nomor Pilihan: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {   
            cout<<"Masukkan Nilai Yang ingin Dimasukkan:"<<endl;
            cin>>val;
            push(val);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            display();
            break;
         }
         case 4: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"Salah Silahkan Ulang"<<endl;
         }
      }
   }while(ch!=4); 
      return 0;
}    
