// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58B09824 .. +0x12 bytes.
extern "C" __declspec(naked) void FUN_58b09824() {
    __asm {
        ; Exact mapped bytes C6 84 05 EC FE FF FF 00: mov byte ptr [ebp + eax - 0x114], 0
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x05
        __asm _emit 0xec
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 35 D1 58: mov eax, dword ptr [0x58d135c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x35
        __asm _emit 0xd1
        __asm _emit 0x58
        ; Exact mapped bytes E9 43 02 22 00: jmp 0x58d29a79
        __asm _emit 0xe9
        __asm _emit 0x43
        __asm _emit 0x02
        __asm _emit 0x22
        __asm _emit 0x00
    }
}
