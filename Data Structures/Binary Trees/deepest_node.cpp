int deepestNode(node* root){
    node* temp;
    queue<node*> q;

    q.push(root);
    while(q.isEmpty!=true){
        temp = q.top();
        q.pop();
        if(q->left)
            q.push(temp->left);
        if(q->right)
            q.push(temp->right);
    }
    return temp->data;
}