#include<iostream>
using namespace std;
class stack {
  private:
    int *a;
    int top;
  public:
stack(){
top=-1;
}
void createstack(int size){
a=new int[size];
}
void push(int data,int size){
if(top==size-1){
cout<<"Stack overflow";
}else{
top++;
a[top]=data;
}
}
void pop(){
if(top==-1){
cout<<"Stack underflow";
}else{
top--;
}
}
int peek(){
return a[top];
}
};
int main() {
stack obj;
obj.createstack(5);
obj.push(1,5);
obj.push(2,5);
obj.push(3,5);
obj.push(4,5);
obj.push(5,5);
//obj.push(5,5);
obj.pop();
int a=obj.peek();
cout<<a;
    return 0;
}
