#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
#include <queue>
#include <unordered_set>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
    
};

int listSize(ListNode* head) {
    int size = 1;
    while (head->next != NULL) {
        head = head->next;
        size++;
    }
    return size;
}
ListNode* middleNode(ListNode* head) {
    int size = listSize(head);
    for (int i = 0; i < size / 2; i++)
        head = head->next;
    return head;
}

int main() {

    return 0;
}