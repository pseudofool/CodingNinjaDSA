#include <string>
class TrieNode{
    public:
    char data;
    TrieNode **children;
    bool isTerminal;

    TrieNode(char data){
        this->data = data;
        children = new TrieNode*[26];
        for (int i=0; i<26; i++){
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

class Trie{
    TrieNode *root;
    public:
    Trie(){
        root = new TrieNode('\0');
    }
    
    // insert helper function
    void insertWord(TrieNode *root, string word){
        // base case
        if (word.size() == 0){
            root->isTerminal = true;
            return;
        }

        // small calculation
        int index = word[0] - 'a';
        TrieNode *child;
        if (root->children[index] != NULL){
            child = root->children[index];
        }else{
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }

        //recursive call
        insertWord(child, word.substr(1));
    }

    void insert(string word){
        insertWord(root, word);
    }


    bool searchWord(TrieNode *root, string word) {
    	if (word.size() == 0){
        	return root->isTerminal;
        }
        int index = word[0] - 'a';
        TrieNode *child;
        if (root->children[index] != NULL){
            child = root->children[index];
        }else{
            return false;
        }
        
        return searchWord(child, word.substr(1));
        
    }
    
    bool search(string word){
        return searchWord(root, word);
    }

    void removeWord(TrieNode *root, string word){
        if (word.size() == 0){
            root->isTerminal = false;
            return;
        }

        int index = word[0] - 'a';
        TrieNode *child;
        if (root->children[index] != NULL){
            child = root->children[index];
        }else{
            return;
        }

        removeWord(child, word.substr(1));

        // check if the current node is useless or not
        if (child->isTerminal == false){
            for (int i=0; i<26; i++){
                if (child->children[i] != NULL){
                    return;
                }
            }
            delete child;
            root->children[index] = NULL;
        }
    }
    
    void remove(string word){
        removeWord(root, word);
    }
    
};