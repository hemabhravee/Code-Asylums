int height(Node* node){
    int h1,h2,h;
    if (node == NULL)
        return 0;
    h1 = height(node->left);
    h2 = height(node->right);
    h = max(h1,h2);
    return h+1;
}

int diameter(Node* node)
{
   int d1=0,d2=0,h1=0,h2=0;
   if(node->left==NULL && node->right ==NULL)
        return 1;
    if(node->left!=NULL){
        d1 = diameter(node->left);
        h1 = height(node->left);
    }
    if(node->right!=NULL){
        d2 = diameter(node->right);
        h2 = height(node->right);
    }
    int a = max(d1,d2);
    return max(a,h1+h2+1);
}