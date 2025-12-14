#include <stddef.h>

typedef struct Node {
    struct Node *next;
} Node;

size_t loop_size(const Node *node) {
    const Node *slow = node;
    const Node *fast = node;

    do {
        slow = slow->next;
        fast = fast->next->next;
    } while (slow != fast);

    size_t count = 1;
    fast = fast->next;

    while (slow != fast) {
        fast = fast->next;
        count++;
    }

    return count;
}
