struct node
{
    int data;
    struct node *link;
    struct node *current;
    struct node *ptr;
    struct node *p;

};
void main()
{
    struct node*head='\0';
    struct node*current='\0';
       struct node *ptr='\0';
       struct node *p='\0';
       int count=0;
    head = (struct node *)malloc(sizeof(struct node));
    head->data=10;
    head->link='\0';

    current= (struct node *)malloc(sizeof(struct node));
    current->data=20;
    current->link='\0';
    head->link=current;

    current= (struct node *)malloc(sizeof(struct node));
    current->data=30;
    current->link='\0';
    head->link->link=current;

    p= (struct node *)malloc(sizeof(struct node));
    p->data=40;
    p->link='\0';

    ptr=head;
while(ptr!='\0')
{

    printf("%d\n",ptr->data);
    count++;
    ptr=ptr->link;

}
printf("%d",count);
//printf("\n%x",ptr);
p->link=p;
printf("\n%d",p->data);
}
