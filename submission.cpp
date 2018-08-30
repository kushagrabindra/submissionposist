#include<iostream>
using namespace std;
struct node
[
    string date;
    int ownerId;
    float val;
    string ownerName;
    int nodeNumber;
    string nodeId;
    string referenceNodeId;
    string childRefernceNodeId;
    string genesisReferenceNodeId;
    vector<struct node*> child;
];
struct node* newNode(node* root,string date,int ownerId,float val,string ownerName,int nodeNumber)
{
    struct node temp = new node;
    temp->date=date;
    temp->ownerId=ownerId;
    temp->val=val;
    temp->check=val;
    temp->ownerName=ownerName;
    temp->nodeNumber=nodeNumber;
    temp->nodeId=nodeId;
    temp->referenceNodeId=&temp->&temp;
    temp->rchildReferenceNodeId=NULL;
    temp->genesisReferenceNodeId=&temp;
    temp->child=NULL;
    return (temp);
}
struct node* Insert(node* node,string date,int ownerId,float val,string ownerName,int nodeNumber)
{
    if(genesis==NULL)
        return(newNode(node,date,data[],nodeNumber,nodeId));
    node->check=node->check-val;
    else if(node->check>=0.00)
    {
        node->child=child.push(Insert(node,date,data[],nodeNumber,nodeId));
    }
    else
        cout<<"NOT POSSIBLE";
    return node;
}
int main()
{
      struct node *genesis = NULL;
    genesis = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
}

}
