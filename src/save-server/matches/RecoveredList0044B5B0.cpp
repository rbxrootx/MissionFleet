// Embedded singly linked list: null head and caller-supplied link offset.
class RecoveredList0044B5B0 {
    void *head;
    int linkOffset;
public:
    RecoveredList0044B5B0(int offset);
};
RecoveredList0044B5B0::RecoveredList0044B5B0(int offset)
{
    head = 0;
    linkOffset = offset;
}
