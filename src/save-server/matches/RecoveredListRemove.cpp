// Remove one node from an intrusive singly linked list.
// The removed node's embedded link is cleared before returning success.
extern "C" char File00676984;
extern "C" int __stdcall Assert00528D40(const char *, int);
class RecoveredListPush00542F80 {
    void *head;
    int linkOffset;
public:
    void *&Next(void *node);
    int Remove(void *node);
};
int RecoveredListPush00542F80::Remove(void *node)
{
    do {
        if (node == 0 && Assert00528D40(&File00676984, 0x25))
            __asm int 3
    } while (0);
    if (head == 0)
        return 0;
    int removed = 0;
    if (head == node) {
        head = Next(node);
        Next(node) = 0;
        removed = 1;
    } else {
        void *previous = head;
        while (previous != 0 && Next(previous) != node)
            previous = Next(previous);
        if (previous != 0) {
            Next(previous) = Next(node);
            Next(node) = 0;
            removed = 1;
        }
    }
    return removed;
}
