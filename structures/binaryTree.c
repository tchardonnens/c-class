struct node
{
  int data;
  struct node *left;
  struct node *right;
};

typedef struct node Node;

int show(Node *root)
{
  if (root == NULL)
    return;
  show(root->left);
  printf("%d ", root->data);
  show(root->right);
}

int search(Node *root, int data)
{
  if (root == NULL)
    return 0;
  if (root->data == data)
    return 1;
  if (root->data > data)
    return search(root->left, data);
  else
    return search(root->right, data);
}

int isGreater(Node *root, int data)
{
  if (root == NULL)
    return 0;
  if (root->data > data)
    return 1;
  return isGreater(root->right, data);
}

int isLesser(Node *root, int data)
{
  if (root == NULL)
    return 0;
  if (root->data < data)
    return 1;
  return isLesser(root->left, data);
}

Node *insert(Node *root, int data)
{
  if (root == NULL)
  {
    Node *leaf = malloc(sizeof(Node));
    leaf->data = data;
    leaf->left = NULL;
    leaf->right = NULL;
    return leaf;
  }
  if (root->data > data)
    root->left = insert(root->left, data);
  else
    root->right = insert(root->right, data);
  return root;
}

void show(Node *root)
{
  if (root == NULL)
    return;
  show(root->left);
  printf("%d ", root->data);
  show(root->right);
}

int main(void)
{
  Node *root = malloc(sizeof(Node));
  root->data = 5;
  root->left = NULL;
  root->right = NULL;

  Node *left = malloc(sizeof(Node));
  left->data = 3;
  left->left = NULL;
  left->right = NULL;

  Node *right = malloc(sizeof(Node));
  right->data = 7;
  right->left = NULL;
  right->right = NULL;

  root->left = left;
  root->right = right;

  show(root);
  return 0;
}