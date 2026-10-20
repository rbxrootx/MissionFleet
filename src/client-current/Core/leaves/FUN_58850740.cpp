// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58850740 .. +0x3 bytes.
extern "C" __declspec(naked) void FUN_58850740() {
    __asm {
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
