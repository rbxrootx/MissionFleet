// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00547957 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_00547957_00547957() {
    __asm {
        push ebp
        mov ebp, esp
        push 2
        ; Exact mapped bytes FF 15 B8 28 5E 00: call dword ptr [0x5e28b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes A3 98 E8 5D 00: mov dword ptr [0x5de898], eax
        __asm _emit 0xa3
        __asm _emit 0x98
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        push 3
        ; Exact mapped bytes FF 15 B8 28 5E 00: call dword ptr [0x5e28b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes A3 9C E8 5D 00: mov dword ptr [0x5de89c], eax
        __asm _emit 0xa3
        __asm _emit 0x9c
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 00 E9 5D 00 00 00 00 00: mov dword ptr [0x5de900], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0xe9
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ebp
        ret
    }
}
