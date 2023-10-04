bool isPalindrome(Node *head)
{
    Node *slow = head;
	Node * fast = head;
	Node * prev = NULL;

	while(fast!=NULL&&fast->next!=NULL)
	{
		fast = fast->next->next;
		Node * NXT = slow->next;
		slow->next = prev;
		prev = slow;
		slow = NXT;
	}

	if(fast!=NULL)slow=slow->next;

	while(prev&&slow)
	{
		if(prev->data!=slow->data)return false;
		slow=slow->next;
		prev=prev->next;
	}
	return true;
}
