// Intrusive list insertion: the link field is located by the list's offset.
// Preserve assertions and their do/while form from the original debug build.
extern "C" char File00676984;
extern "C" int __stdcall Assert00528D40(const char *, int);
class RecoveredListPush00542F80 {
    void *head;
    int linkOffset;
public:
    void *&Next(void *node);
    void Push(void *node);
};
void RecoveredListPush00542F80::Push(void *node)
{
    do {
        if (node == 0 && Assert00528D40(&File00676984, 0x1c))
            __asm int 3
    } while (0);
    do {
        if (Next(node) != 0 && Assert00528D40(&File00676984, 0x1d))
            __asm int 3
    } while (0);
    Next(node) = head;
    head = node;
}
