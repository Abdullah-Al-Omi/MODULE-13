#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int x){
        data = x;
        next = NULL;
        prev = NULL;
    }
};
class myStack{
    public:
    Node* head=NULL;
    Node* tail=NULL;
    int siz=0;
    void push(int x){
        siz++;
        Node* temp = new Node(x);
        if(head==NULL){
            head = temp;
            tail = temp;
        }
        else{
            temp->prev = tail;
            tail->next = temp;
            tail = temp;
        }
        
    }
    void pop(){
        siz--;
        if(tail!=NULL){
            tail = tail->prev;
            if(tail!=NULL){
                tail->next = NULL;
            }
            else{
                head = NULL;
            }
        }
    }
    int top(){
        if(tail!=NULL){
            return tail->data;
        }
        return -1;
    }
    int size(){
        return siz;
  
    }
    bool empty(){
        if (siz == 0) {
            return true;
        }
        else{
            return false;
        }
    }
};
int main()
{

    int n;
    myStack st;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        st.push(x);
    }
    while( !st.empty() ){
        cout<<st.top()<<endl;
        st.pop();
    }   


return 0;
}