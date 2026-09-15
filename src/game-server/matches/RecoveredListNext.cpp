// Return the intrusive link field embedded at the list's configured offset.
// Keep the original debug assertion for a null node.
extern "C" char File005C5AF0;
extern "C" int __stdcall Assert00534A00(const char *, int);
class RecoveredListPush00547EE0 {
    void *head;
    int linkOffset;
public:
    void *&Next(void *node);
};
void *&RecoveredListPush00547EE0::Next(void *node)
{
    do {
        if (node == 0 && Assert00534A00(&File005C5AF0, 0x40))
            __asm int 3
    } while (0);
    return *reinterpret_cast<void **>(static_cast<char *>(node) + linkOffset);
}
