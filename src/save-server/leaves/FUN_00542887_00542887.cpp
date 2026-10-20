// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00542887 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_00542887_00542887() {
    __asm {
        push ebp
        mov ebp, esp
        push 2
        ; Exact mapped bytes FF 15 C4 BF 68 00: call dword ptr [0x68bfc4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A3 B0 6D 68 00: mov dword ptr [0x686db0], eax
        __asm _emit 0xa3
        __asm _emit 0xb0
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        push 3
        ; Exact mapped bytes FF 15 C4 BF 68 00: call dword ptr [0x68bfc4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A3 B4 6D 68 00: mov dword ptr [0x686db4], eax
        __asm _emit 0xa3
        __asm _emit 0xb4
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 18 6E 68 00 00 00 00 00: mov dword ptr [0x686e18], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x18
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ebp
        ret
    }
}
