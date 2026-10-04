// ECX is the receiver; the domain type of its +4 field remains unknown.
extern "C" unsigned int __attribute__((thiscall)) FUN_587453a0(
    const unsigned char* receiver) {
    return *reinterpret_cast<const unsigned int*>(receiver + 4);
}
