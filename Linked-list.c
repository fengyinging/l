#include<stdio.h>
#include<stdlib.h>

//define a linked-list
typedef struct _node {
    int value;
    struct _node *next;
}Node;

//pointer points struct's head or tail
typedef struct _list{
    Node  *head;
    // Node *tail;   //shuang xiang lian biao.
}List;


int main()
{
    void print(List *pList);
    List list;
    Node * head=NULL;
    int number;
    list.head=NULL;
    do{
        scanf("%d",&number);
        if(number!=-1)
        {
            add(&list,number);
        }
    }while(number!=-1);
    print(&list);
    scanf("%d",&number);
    Node *p;
    int isFound=0;
    for(p=list.head;p;p=p->next){
        printf("It is found!\n");
        isFound=1;
        break;
    }
    if(isFound!=1){
        printf("Can't find!\n");
    }

    Node *q;
    for(q=NULL,p=list.head;p;q=p,p=p->next){
        if(p->value==number){
           if(q){
                q->next=p->next;
           }else{
               list.head=p->next;
           }
            free(p);
            break;
        }
    }
    for(p=head;p;p=q){
        q=p->next;
        free(p);
    }
    return 0;
}

void add(List* pList,int number)
{
    //add to linked-list
    Node *p=(Node*)malloc(sizeof(Node));
    p->value=number;
    p->next=NULL;
    //find the last
    Node *last=pList->head;
    if(last){
        while(last->next){
            last->next;
        }
        //attach
        last->next=p;
    }
    else{
        pList->head=p;
    }
}

void print(List *pList)
{
    Node *p;
    for(p=pList->head;p;p=p->next){
        printf("%d\t",p->value);
    }
    printf("\n");
}