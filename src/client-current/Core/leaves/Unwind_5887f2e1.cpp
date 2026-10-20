// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887F2E1 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_5887f2e1() {
    __asm {
        ; Exact mapped bytes 8D 8D AC FD FF FF: lea ecx, [ebp - 0x254]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xac
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 44 AA C2 FF: jmp 0x584a9d30
        __asm _emit 0xe9
        __asm _emit 0x44
        __asm _emit 0xaa
        __asm _emit 0xc2
        __asm _emit 0xff
    }
}
