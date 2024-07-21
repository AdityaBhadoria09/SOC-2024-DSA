class MyQueue {
private:
    int arr[100005];
    int front;
    int rear;

public :
    MyQueue(){front=0;rear=0;}
    void push(int);
    int pop();
};
 

//Function to push an element x in a queue.
int MyQueue :: pop()
{
    if(front<0){
        return -1;
       } 
    
   else {int x=arr[front];
            for (int i = 0; i < rear - 1; i++) {
                arr[i] = arr[i + 1];
            }

            // decrement rear
            rear--;
             return x ;
        }
       
    }

//Function to pop an element from queue and return that element.
int MyQueue :: pop()
{
    if(front<0){
        return -1;
    } 
    int x=arr[front];
    front=front+1;
        return x;
    }
