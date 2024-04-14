struct pile{
    int data;
    pile * next;
};
pile* top;
pile* lastone;

int popP(){
pile* p=new pile;
p=top;
int value;
if(top==NULL){
    cout<<"stack is under flow";
}else{
value=top->data;
top=top->next;
free(p);
return value;
}


}
void pushP(int data){
    pile* p=new pile;
    p->data=data;
    p->next=NULL;

    if(top==NULL){
        top=p;
        
    }else{
        p->next=top;
        top=p;
    }
}
void display(){
    pile* p=new pile;
    p=top;
    if(top==NULL){
        cout<<"stck is underflow";
    }else{
       while(p!=NULL){
            cout<<p->data<<"\n";
            p=p->next;
        }
    }
}