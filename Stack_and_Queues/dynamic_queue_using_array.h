template <typename T>
class Queue{
    public:
    T* data;
    int firstIndex;
    int lastIndex;
    int size;
    int capacity;
    Queue(){
        data = new T[3];
        firstIndex = -1;
        lastIndex = 0;
        size = 0;
        capacity = 3;
    }
    int getSize(){
        return size;
    }
    bool isEmpty(){
        return size == 0;
    }
    T front(){
        if (size == 0){
            cout << "Empty Queue" << endl;
            return 0;
        }
        return data[firstIndex];
    }

    void enqueue(T element){
        if (size == capacity){
            T *newData = new T[2*capacity];
            // copying old queue data to new queue
            int j=0;
            for (int i=firstIndex; i<capacity; i++){
                newData[j] = data[i];
                j++;
            }
            for (int i=0; i<firstIndex; i++){
                newData[j] = data[i];
                j++;
            }
            firstIndex = 0;
            lastIndex = capacity;

            delete [] data;
            data = newData;
            capacity = 2*capacity;
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