#include <climits>
class StackUsingArray{
    int *data;
    int nextIndex;
    int capacity;
    public:
    StackUsingArray(int totalSize){
        data = new int[totalSize];
        nextIndex = 0;
        capacity = totalSize;
    }
    bool isEmpty(){
        return nextIndex == 0;
    }
    void push(int element){
        if (nextIndex == capacity){
            int *newData = new int[2*capacity];
            for (int i = 0; i<capacity; i++){
                newData[i] = data[i];
            }
            delete data;
            data = newData;
            capacity = 2*capacity;
            // cout << "Stack overflow" << endl;
            // return;
        }
        data[nextIndex] = element;
        nextIndex++;
    }
    int pop(){
        if (nextIndex == 0){
            cout << "Stack is empty" << endl;
            return INT_MIN;
        }
        nextIndex--;
        return data[nextIndex];
    }
    int top(){
        if (isEmpty()){
            cout << "Stack is empty" << endl;
            return INT_MIN;
        }
        return data[nextIndex-1];
    }

    int size(){
        return nextIndex;
    }
};