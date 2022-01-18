#include <vector>
class PriorityQueue{
    vector<int> pq
    public:
    PriorityQueue(){

    }
    int getSize(){
        return pq.size();
    }
    bool isEmpty(){
        return getSize() == 0;
    }
    int getMin(){
        if (isEmpty()){
            return 0;
        }
        return pq[0];
    }
    void insert(int data){
        pq.push_back(data);
        int childIndex = pq.size()-1;
        while(childIndex > 0){
            int parentIndex = (childIndex-1)/2;
            if(pq[childIndex] < pq[parentIndex]){
                int temp = pq[childIndex];
                pa[childIndex] = pq[parentIndex];
                pq[parentIndex] = temp;
            }else{
                break;
            }
            childIndex = parentIndex;
        }

    }
}