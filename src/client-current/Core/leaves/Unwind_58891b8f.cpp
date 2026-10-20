// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58891B8F .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58891b8f() {
    __asm {
        ; Exact mapped bytes 8D 4D AC: lea ecx, [ebp - 0x54]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xac
        ; Exact mapped bytes E9 99 73 F0 FF: jmp 0x58798f30
        __asm _emit 0xe9
        __asm _emit 0x99
        __asm _emit 0x73
        __asm _emit 0xf0
        __asm _emit 0xff
    }
}
