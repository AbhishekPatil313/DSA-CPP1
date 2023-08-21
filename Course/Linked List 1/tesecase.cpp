// Write your code here
    if(M==0)return NULL;
    Node *temp = head;
  //  Node *tail = head;
    Node *temp2=temp;
    Node *del = temp;
    while(temp!=NULL){
 	int count1=1;
    int count2=1;
        
        while(count1!=M and temp!=NULL){
            temp=temp->next;
            count1++;
        }
        if(temp!=NULL) temp2 = temp->next;
        while(count2!=N and temp2!=NULL){
    
         
            temp2=temp2->next;
           
            count2++;
        }
        if(temp2!=NULL){temp2=temp2->next;
        temp->next=temp2;
        temp=temp2;
                       }
        if(temp2=NULL){break;}
       //  if(temp2->next=NULL)temp->next=NULL;
       
    }   
  
   // if(temp2==NULL)temp->next=NULL;
    //if(temp==NULL)temp2->next=NULL;
    return head;      