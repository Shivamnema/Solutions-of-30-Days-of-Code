		int getHeight(Node* root){
           if (root==NULL) 
       return 0;
   else
   {
       /* compute the depth of each subtree */
       int lDepth = getHeight(root->left);
       int rDepth = getHeight(root->right);
 
       /* use the larger one */
       if (lDepth > rDepth) 
           return(lDepth+1);
       else return(rDepth+1);
    } 
}            

