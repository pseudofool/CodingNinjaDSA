#include <climits>
template <typename T>
class StackUsingArray{
    T *data;
    int nextIndex;
    int capacity;
    public:
    StackUsingArray(){
        data = new T[3];
        nextIndex = 0;
        capacity = 3;
    }
    bool isEmpty(){
        return nextIndex == 0;
    }
    void push(T element){
        if (nextIndex == capacity){
            T *newData = new T[2*capacity];
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
    T pop(){
        if (nextIndex == 0){
            cout << "Stack is empty" << endl;
            // return INT_MIN;
            return 0; // 0 is valid for every data type
        }
        nextIndex--;
        return data[nextIndex];
    }
    T top(){
        if (isEmpty()){
            cout << "Stack is empty" << endl;
            // return INT_MIN;
            return 0;   // 0 is valid for every data type
        }
        return data[nextIndex-1];
    }

    int size(){
        return nextIndex;
    }
};