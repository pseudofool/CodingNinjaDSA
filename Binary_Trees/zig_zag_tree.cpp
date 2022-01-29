void zigZagOrder(BinaryTreeNode<int> *root) {
    stack<BinaryTreeNode<int>*> s1;
    stack<BinaryTreeNode<int>*> s2;
    s1.push(root);
    while(s1.size() != 0 || s2.size() != 0){
        while(!s1.empty()){
            BinaryTreeNode<int>* front = s1.top();
            cout << front->data << " ";
            s1.pop();
            if (front->left != NULL)
            	s2.push(front->left);
            if (front->right != NULL)
            	s2.push(front->right);
            if (s1.size() == 0)
            cout << endl;
        }

        while(!s2.empty()){
            BinaryTreeNode<int>* front = s2.top();
            cout << front->data << " ";
            s2.pop();
            if (front->right != NULL)
        		s1.push(front->right);
            if (front->left != NULL)
            	s1.push(front->left);
            if (s2.size() == 0)
            cout << endl;
        }
    }
}