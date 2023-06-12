struct cellule
{
  char *name;
  int office;
  struct cellule *next;
};
typedef struct cellule Cellule;

Cellule *nouveau()
{
  char name[50];
  printf("Enter the name: ");
  scanf("%s", name);

  int office;
  printf("Enter the office number: ");
  scanf("%d", &office);

  Cellule *cell = malloc(sizeof(Cellule));
  cell->name = malloc(strlen(name) + 1);
  strcpy(cell->name, name);
  cell->office = office;
  cell->next = NULL;

  return cell;
}

void addHead(head)
{
  Cellule newCell = *nouveau();
  newCell.next = head;
  return &newCell;
}

void show(Cellule *top)
{
  Cellule *cell = top;
  while (cell)
  {
    printf("%s %d \n", cell->name, cell->office);
    cell = cell->next;
  }
}