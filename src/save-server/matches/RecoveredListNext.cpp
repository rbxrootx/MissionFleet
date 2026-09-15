// Return the intrusive link field embedded at the list's configured offset.
// Keep the original debug assertion for a null node.
extern "C" char File00671FE0;
extern "C" int __stdcall Assert00528D40(const char *, int);
class RecoveredListPush00542F80 {
    void *head;
    int linkOffset;
public:
    void *&Next(void *node);
};
void *&RecoveredListPush00542F80::Next(void *node)
{
    do {
        if (node == 0 && Assert00528D40(&File00671FE0, 0x40))
            __asm int 3
    } while (0);
    return *reinterpret_cast<void **>(static_cast<char *>(node) + linkOffset);
}
