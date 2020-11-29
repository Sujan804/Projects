#include<bits/stdc++.h>
using namespace std;
typedef struct myList{
    int data;
    struct myList *next;
}node;
void insert(node *s, int data){
    while(s->next != NULL){
        s = s->next;
    }
    s->next = (node*)malloc(sizeof(node));
    s->next->data = data;
    s->next->next =NULL;
}
void display(node *s){
    while(s->next != NULL){
        cout<<s->next->data<<endl;
        s = s->next;
    }
}
void Delete(node *s, int data){
    while(s->next!= NULL){
        if(s->next->data==data){
            s->next = s->next->next;
            return;

        }
        s = s->next;
    }
}
void Search(node *s, int data){
    int count =0;
    while(s->next != NULL){
        if(s->next->data == data)
        {
            count ++;
        }
        s = s->next;
    }
    cout<<count<<endl;
}
int main(){

    node *first =(node*)malloc(sizeof(node));
    first->next= NULL;
    initialize:
    while(1){
        cout<<"Choose one :"<<endl;
    cout<<"1.Insert"<<endl<<"2.Delete"<<endl<<"3.Search"<<endl<<"4.Display"<<endl<<"0.Exit"<<endl;;
    int n,data;
    cin>>n;
    switch(n){
    case 0:
        cout<<"Thank You"<<endl;
        goto kajses;

    case 1:
        cout<<"Enter the data:"<<endl;
        cin>>data;
        insert(first,data);
        break;
    case 2:
        cout<<"Enter the data:"<<endl;
        cin>>data;
        Delete(first,data);
        break;
    case 3:
        cout<<"Enter the data:"<<endl;
        cin>>data;
        Search(first,data);
        break;
    case 4:
        display(first);
        cout<<"endl";
        break;
    default:
        cout<<"Please Enter a right Number"<<endl;
        goto initialize;
    }
    }

    kajses:
    return 0;

}
