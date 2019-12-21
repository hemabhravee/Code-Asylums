//code not yet complete

int height(Node* node){
    int h1,h2,h;
    if (node == NULL)
        return 0;
    h1 = height(node->left);
    h2 = height(node->right);
    h = max(h1,h2);
    return h+1;
}

int node* heightDiff(node* root){
    if(root == NULL)
        return 0;
    int x = height(root->left);
    int y = height(root->right);

    int a = heightDiff(root->left);
    int b = heightDiff(root->right);

    if(abs(a-b)>1)
        return 10;

    return abs(x-y);
}

bool isHeightBalanced(node* root){
    if(root == NULL)
        return true;
    int a = heightDiff(root);

}

