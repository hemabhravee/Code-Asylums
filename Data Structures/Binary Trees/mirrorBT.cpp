void mirrorBT(Node* node) 
{
    Node* temp;
    if(node != NULL){
        mirrorBT(node->left);
        mirrorBT(node->right);
        temp = node->left;
        node->left = node->right;
        node->right = temp;
    }
} 
