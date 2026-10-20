// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004231F0 .. +0x39 bytes.
extern "C" __declspec(naked) void FUN_004231f0_004231F0() {
    __asm {
        ; Exact mapped bytes A1 6C FC 44 00: mov eax, dword ptr [0x44fc6c]
        __asm _emit 0xa1
        __asm _emit 0x6c
        __asm _emit 0xfc
        __asm _emit 0x44
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 74 0D: je 0x423207
        __asm _emit 0x74
        __asm _emit 0x0d
        test eax, eax
        ; Exact mapped bytes 75 2A: jne 0x423228
        __asm _emit 0x75
        __asm _emit 0x2a
        ; Exact mapped bytes 83 3D 94 A8 44 00 01: cmp dword ptr [0x44a894], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x94
        __asm _emit 0xa8
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 75 21: jne 0x423228
        __asm _emit 0x75
        __asm _emit 0x21
        push 0fch
        ; Exact mapped bytes E8 18 00 00 00: call 0x423229
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 68 FE 44 00: mov eax, dword ptr [0x44fe68]
        __asm _emit 0xa1
        __asm _emit 0x68
        __asm _emit 0xfe
        __asm _emit 0x44
        __asm _emit 0x00
        pop ecx
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x42321d
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        push 0ffh
        ; Exact mapped bytes E8 02 00 00 00: call 0x423229
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        ret
    }
}
