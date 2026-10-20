// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58881D00 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_58881d00() {
    __asm {
        ; Exact mapped bytes 8D 8D 7C FF FF FF: lea ecx, [ebp - 0x84]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 D5 53 C8 FF: jmp 0x585070e0
        __asm _emit 0xe9
        __asm _emit 0xd5
        __asm _emit 0x53
        __asm _emit 0xc8
        __asm _emit 0xff
    }
}
