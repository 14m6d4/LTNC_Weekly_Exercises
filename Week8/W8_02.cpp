//Đệ quy
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    if (head == NULL)
    {
        return new SinglyLinkedListNode(data);
    }
    else if (head->next == NULL)
    {
        head->next = new SinglyLinkedListNode(data);
    }
    else 
    {
        insertNodeAtTail(head->next, data);
    }
    
    return head;
}
//Vòng lặp
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    SinglyLinkedListNode* newNode = new SinglyLinkedListNode(data);
    if (head == NULL)
    {
        return newNode;
    }
    else
    {
        SinglyLinkedListNode* current = head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = newNode;
    }
    return head;
}