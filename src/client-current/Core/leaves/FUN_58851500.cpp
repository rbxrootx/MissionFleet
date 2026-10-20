// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58851500 .. +0xC bytes.
extern "C" __declspec(naked) void FUN_58851500() {
    __asm {
        ; Exact mapped bytes 8B 45 10: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes FF 30: push dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x30
        ; Exact mapped bytes E8 0C 88 00 00: call 0x58859d16
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
