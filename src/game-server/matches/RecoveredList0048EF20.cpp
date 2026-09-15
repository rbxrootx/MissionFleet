// Embedded singly linked list: null head and caller-supplied link offset.
class RecoveredList0048EF20 {
    void *head;
    int linkOffset;
public:
    RecoveredList0048EF20(int offset);
};
RecoveredList0048EF20::RecoveredList0048EF20(int offset)
{
    head = 0;
    linkOffset = offset;
}
