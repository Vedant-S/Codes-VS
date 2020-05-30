//AVL Tree

#include <iostream>
using namespace std;

struct node *insert(node *, int );
struct node *create(node *);
struct node *RRrotation(node *);
struct node *LLrotation(node *);
void inorderTraversal(node *);
int avlHeight(node *);
int max(int , int);
int getBalanceFactor(node *);

struct node {
  node *left;
  node *right;
  int data;
  int height;
};

int avlHeight(node *tree) {
  if(tree == NULL) {
    return 0;
  }
  else {
    return tree->height;
  }
}

int max(int a, int b) {
  return (a > b) ? a : b;
}

int getBalanceFactor(node *tree) {
  if(tree == NULL) {
    return 0;
  }

  return avlHeight(tree->left) - avlHeight(tree->right);
}

node *LLrotation(node *x) {
  node *y = x->right;
  node *T2 = y->left;

  y->left = x;
  x->right = T2;

  x->height = max(avlHeight(x->left), avlHeight(x->right)) + 1;
  y->height = max(avlHeight(y->left), avlHeight(y->right)) + 1;

  return y;
}

node *RRrotation(node *y) {
  node *x = y->left;
  node *T2 = x->right;

  x->right = y;
  y->left = T2;

  x->height = max(avlHeight(x->left), avlHeight(x->right)) + 1;
  y->height = max(avlHeight(y->left), avlHeight(y->right)) + 1;

  return x;
}

node *insert(node *tree, int value) {
  node *new_node = new node;

  new_node->data = value;
  new_node->left = NULL;
  new_node->right = NULL;
  new_node->height = 1;

  if(tree == NULL) {
    return new_node;
  }

  if(value < tree->data) {
    tree->left = insert(tree->left, value);
  }

  else if(value > tree->data) {
    tree->right = insert(tree->right, value);
  }

  else {
    return tree;
  }


  tree->height = max(avlHeight(tree->left), avlHeight(tree->right)) + 1;


  int balanceFactor = getBalanceFactor(tree);


  if(balanceFactor > 1 && value < tree->left->data) {
    return RRrotation(tree);
  }


  if(balanceFactor < -1 && value > tree->right->data) {
    return LLrotation(tree);
  }


  if(balanceFactor > 1 && value > tree->left->data) {
    tree->left = LLrotation(tree->left);
    return RRrotation(tree);
  }


  if(balanceFactor < -1 && value < tree->right->data) {
    tree->right = RRrotation(tree->right);
    return LLrotation(tree);
  }

  return tree;
}

node *create(node *tree) {
  int value;

  cout<<"Enter the value to be inserted: ";
  cin>>value;

  while(value != -1) {
    tree = insert(tree, value);

    cout<<"Enter the value to be inserted: ";
    cin>>value;
  }

  return tree;
}

void inorderTraversal(node *tree) {
  if(tree != NULL) {
    inorderTraversal(tree->left);
    cout<<tree->data<<" ";
    inorderTraversal(tree->right);
  }
}

int main() {
  node *root = NULL;

  int option, value;

  do {
    cout<<"***AVL TREE***\n"
        <<"1. Avl Create\n"
        <<"2. Insert\n"
        <<"3. Inorder Traversal\n"
        <<"4. Avl Height\n"
        <<"5. Exit\n";

    cout<<"Enter your option: ";
    cin>>option;

    switch(option) {
      case 1: root = create(root);
              break;

      case 2: cout<<"Enter the value to be inserted: ";
              cin>>value;

              root = insert(root, value);
              break;

      case 3: inorderTraversal(root);
              cout<<endl;
              break;

      case 4: value = avlHeight(root);
              cout<<"The height of the tree is "<<value<<endl;
              break;

      case 5: break;

      default: cout<<"Wrong option !\n";
               break;
    }
  } while(option != 5);

  if(option == 5) {
    delete root;

    cout<<"\nHave a good day! Cheers\n";
  }
}
