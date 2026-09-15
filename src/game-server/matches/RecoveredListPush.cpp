// Intrusive list insertion: the link field is located by the list's offset.
// Preserve assertions and their do/while form from the original debug build.
extern "C" char File005CA28C;
extern "C" int __stdcall Assert00534A00(const char *, int);
class RecoveredListPush00547EE0 {
    void *head;
    int linkOffset;
public:
    void *&Next(void *node);
    void Push(void *node);
};
void RecoveredListPush00547EE0::Push(void *node)
{
    do {
        if (node == 0 && Assert00534A00(&File005CA28C, 0x1c))
            __asm int 3
    } while (0);
    do {
        if (Next(node) != 0 && Assert00534A00(&File005CA28C, 0x1d))
            __asm int 3
    } while (0);
    Next(node) = head;
    head = node;
}
