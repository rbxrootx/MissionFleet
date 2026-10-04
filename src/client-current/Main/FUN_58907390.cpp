// CNumberScreen vtable +0x1C: forward its configured step to the lower bound.
extern "C" int __attribute__((thiscall)) FUN_58907300(
    unsigned char* receiver, int step);

extern "C" int __attribute__((thiscall)) FUN_58907390(unsigned char* receiver) {
    int step = *reinterpret_cast<int*>(receiver + 0xEC);
    __asm__ __volatile__("" : "+a"(step));  // Preserve the original load/push order.
    return FUN_58907300(receiver, step);
}
