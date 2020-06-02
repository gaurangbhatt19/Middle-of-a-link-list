 ListNode* middleNode(ListNode* head) {  
        ListNode *t1=head;
        ListNode *t2=head;
        while(t2!=NULL && t2->next!=NULL)
            
        { 
            t2=t2->next->next;     
            t1=t1->next;
            
        }
        return t1; 
        
    }
