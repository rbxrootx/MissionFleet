// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5897E1A0 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5897e1a0() {
    __asm {
        ; Exact mapped bytes 8D 4D DC: lea ecx, [ebp - 0x24]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xdc
        ; Exact mapped bytes E9 18 55 DD FF: jmp 0x587536c0
        __asm _emit 0xe9
        __asm _emit 0x18
        __asm _emit 0x55
        __asm _emit 0xdd
        __asm _emit 0xff
    }
}
