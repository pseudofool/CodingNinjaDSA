template <typename T>
class Queue{
    public:
    T* data;
    int firstIndex;
    int lastIndex;
    int size;
    int capacity;
    Queue(int s){
        data = new T[s];
        firstIndex = -1;
        lastIndex = 0;
        size = 0;
        capacity = s;
    }
    int getSize(){
        return size;
    }
    bool isEmpty(){
        return size == 0;
    }
    T top(){
        if (size == 0){
            cout << "Empty Queue" << endl;
            return 0;
        }
        return data[firstIndex];
    }

    void enqueue(T element){
        if (size == capacity){
            cout << "Queue full" << endl;
            return;
        }
        if (firstIndex == -1){
            firstIndex = 0;
        }
        data[lastIndex] = element;
        lastIndex = (lastIndex + 1)%capacity;
        size++;
    }

    T dequeue(){
        if (size == 0){
            cout << "Empty Queue" << endl;
            return 0;
        }
        T ans = data[firstIndex];
        firstIndex = (firstIndex + 1)%capacity;
        size--;
        if (size == 0){
            firstIndex = -1;
            lastIndex = 0;
        }
        return ans;
    }

};