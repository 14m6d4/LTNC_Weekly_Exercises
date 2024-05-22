// Đệ quy
void printLinkedList(SinglyLinkedListNode* head) {
    if (head!=NULL)
    {
        cout << head->data << endl;
        printLinkedList(head->next);
    }

}
//Vòng lặp
void printLinkedList(SinglyLinkedListNode* head) {
    while (head!=NULL)
    {
        cout << head->data << endl;
        head = head->next;
    }

}