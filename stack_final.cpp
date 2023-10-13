#include <iostream>
using namespace std;
int arr[5];
int top=-1;
int sizeofarr =5;
void push(){
    if(top == sizeofarr-1){
        cout<<"stack overflow"<<endl;
    }
    
    else{
        int element;
        cout<<"enter an element to push: ";
        cin>>element;
        top++;
        arr[top]=element;
    }
}

void pop(){
    if(top==-1){
        cout<<"stack underflow"<<endl;
    }
    else{
        top--;
    }
}

void display(){
    for(int fordisp=0 ;fordisp <= top; fordisp++){
        cout<<arr[fordisp]<<endl;
    }
}

int main() {
int choice;
cout<<"1 for push the element in stack"<<endl;
cout<<"2 for pop the element in stack"<<endl;
cout<<"3 for disp the element in stack"<<endl;
cout<<"4 for exit"<<endl;
while(1){
cout<<"enter your choice: ";
cin>>choice;

switch(choice){
    case 1 : 
    push();
    break;
    
    case 2:
    pop();
    break;
    
    case 3 :
    display();
    break;
    
    default:
    cout<<"element cannot be assigned please enter a valid value"<<endl;
    break;
 }
}
return 0;
}