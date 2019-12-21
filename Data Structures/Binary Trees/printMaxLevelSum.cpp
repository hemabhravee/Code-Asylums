int maxLevelSum(Node * root)
{
   Node* temp;
    queue<Node*> q;

    q.push(root);
    q.push(NULL);
    int newmax = 0, mmax = 0;
    while(q.empty()!=true){
        temp = q.front();
        q.pop();
        if(temp!=NULL){
            newmax += temp->data;
            if(mmax<newmax)
                mmax = newmax;

            if(temp->left)
                temp = temp->left;
            if(temp->right)
                temp = temp->right;
        }
        else{
            newmax = 0;
            q.push(NULL);
        }
    }
} 
