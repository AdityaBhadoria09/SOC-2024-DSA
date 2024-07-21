
class MyStack
{
private:
    int arr[1000];
    int top;
public:
    MyStack(){top=-1;}
    int pop();
    void push(int);
};


void MyStack ::push(int x) { 
    int max=1000;
    if(top>=max-1){
        return;
    }
    arr[++top]=x;
    
}

// Function to remove an item from top of the stack.
int MyStack ::pop() {
    if(top<0){
        return -1;
    }
    else{
        int x=arr[top--];
        return x;
    }
}