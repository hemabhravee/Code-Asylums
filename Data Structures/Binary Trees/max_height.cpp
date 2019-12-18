int height(node* root){
    int h1,h2,h;
    if (root == NULL)
        return 0;
    h1 = height(root->left);
    h2 = height(root->right);
    h = max(h1,h2);
    return h+1;
}