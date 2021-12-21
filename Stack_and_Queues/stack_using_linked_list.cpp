template <typename T>
class Node{
    public:   //?
    T data;
    Node *next;
    Node(T data){
        this->data = data;
    }
};

template <typename T>
class Stack{
    public:
    Node<T> *head;
    int size;
    Stack(){
        head = NULL;
        size = 0;
    }
    int getSize(){
        return size;
    }
    bool isEmpty(){
        return size == 0;
    }
    void push(T data){
        Node<T> *newNode = new Node<T>(data);
        newNode->next = head;
        head = newNode;
        size++;
    }
    T pop(){
        if (head == NULL){
            cout << "empty stack" << endl;
            return 0;
        }
        T ans = head->data;
        Node<T>* temp = head;
        head = head->next;
        delete temp;
        size--;
        return ans;
    }
    T top(){
        if (head == NULL){
            cout << "empty stack" << endl;
            return 0;
        }
        return head->data;
    }
};