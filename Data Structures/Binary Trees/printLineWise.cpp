printLineWise(node* root){
    queue<node*> q;
    node* temp;
    q.push(root);
    q.push(NULL);

    while(q.isEmpty == False){
        temp = q.top();
        q.pop();
        if(temp == NULL){
            cout<<endl;
            q.push(NULL);
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left)
                q.push(q->left);
            if(temp->right)
                q.push(q->right);
        }
    }
}

printLineWise2(node* root){
    queue<node*> q;
    while(!q.empty()){
        int size = q.size();
        while(size--){
            temp = q.front();
            q.pop();
            cout<<temp->data<<" ";
        }
        cout<<endl;
    }
}