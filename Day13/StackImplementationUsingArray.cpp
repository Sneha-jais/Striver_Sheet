//Coding Ninjas link: https://www.codingninjas.com/studio/problems/stack-implementation-using-array_3210209?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

// Stack class.
class Stack {
    private:
    int k; // capacity of stack
    vector<int> v;
public:
    int i; //current index
    
    Stack(int capacity) {
        // Write your code here.
        k=capacity;
        i=0;
        v.clear(); //intialize empty array
        
    }

    void push(int num) {
        // Write your code here.
        if(i<k){ //index is less than capacity
        v.push_back(num);
            i++;
        }
    }

    int pop() {
        // Write your code here.
        if(v.size()==0)
            return -1;
        
        i--;
        int n=v.size();
        int temp=v[n-1];
        v.pop_back();
        return temp;
    }
    
    int top() {
        // Write your code here.
         if(v.size()==0)
            return -1;
        int n=v.size();
        int temp=v[n-1];
        return temp;        
        
    }
    
    int isEmpty() {
        // Write your code here.
        if(v.size()==0)
            return 1;
       
            return 0;
        
    }
    
    int isFull() {
        // Write your code here.
         if(v.size()==k)
            return 1;
       
            return 0;
        
    }
    
};
