int countHalfNodes(node* root){
    node* temp;
    queue<node*> q;
    int i, count=0;
    q.push(root);
    while(q.isEmpty!=true){
        temp = q.top();
        q.pop();
        i = 0;
        if(q->left){
            q.push(temp->left);
            i++;
        }
        if(q->right){
            q.push(temp->right);
            i++;
        }
        if(i==1)
            count++;
    }
    return count;
}