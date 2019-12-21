bool areMirrors(node* root1, node* root2){
    if(root1 == NULL && root2 == NULL)
        return 1;
    if(root1 == NULL || root2 == NULL)
        return 0;
    if(root1->data != root2->data)
        return 0;
    bool x = areMirrors(root1->left,root2->right);
    bool y = areMirrors(root1->right,root2->left);
    if(x == true && y== true)
        return true;
    else 
        return false;
}