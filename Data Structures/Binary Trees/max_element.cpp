int findMax(node* root){
    int m1=0,m2=0;
    if(root->left == NULL && root->right == NULL)
        return root->data;
    if(root->left!=NULL)
        m1 = findMax(root->left);
    if(root->right!=NULL)
        m2 = findMax(root->right);
    int m = max(m1,m2);
    int mx = max(m,root->data);
    return mx;
}

int findMin(node* root){
    int m1=10000,m2=10000;
    if(root->left == NULL && root->right == NULL)
        return root->data;
    if(root->left!=NULL)
        m1 = findMin(root->left);
    if(root->right!=NULL)
    m2 = findMin(root->right);
    int m = min(m1,m2);
    int mx = min(m,root->data);
    return mx;
}