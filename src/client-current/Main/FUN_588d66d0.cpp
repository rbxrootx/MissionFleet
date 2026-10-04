// ECX is the receiver; the domain type of its +0x6088 field is unresolved.
extern "C" unsigned int __attribute__((thiscall)) FUN_588d66d0(
    const unsigned char* receiver) {
    return *reinterpret_cast<const unsigned int*>(receiver + 0x6088);
}
