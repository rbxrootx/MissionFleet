// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054284F .. +0x38 bytes.
extern "C" __declspec(naked) void FUN_0054284f_0054284F() {
    __asm {
        push ebp
        mov ebp, esp
        ; Exact mapped bytes 83 3D 0C 6E 68 00 00: cmp dword ptr [0x686e0c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x0c
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 2A: je 0x542885
        __asm _emit 0x74
        __asm _emit 0x2a
        push 2
        ; Exact mapped bytes FF 15 C4 BF 68 00: call dword ptr [0x68bfc4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        add eax, 1
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
        add eax, 1
        ; Exact mapped bytes A3 B4 6D 68 00: mov dword ptr [0x686db4], eax
        __asm _emit 0xa3
        __asm _emit 0xb4
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 18 6E 68 00 01 00 00 00: mov dword ptr [0x686e18], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x18
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ebp
        ret
    }
}
