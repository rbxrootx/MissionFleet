// CNumberScreen vtable +0x18: forward its configured step to the upper bound.
extern "C" int __attribute__((thiscall)) FUN_589072a0(
    unsigned char* receiver, int step);

extern "C" int __attribute__((thiscall)) FUN_58907380(unsigned char* receiver) {
    int step = *reinterpret_cast<int*>(receiver + 0xEC);
    __asm__ __volatile__("" : "+a"(step));  // Preserve the original load/push order.
    return FUN_589072a0(receiver, step);
}
