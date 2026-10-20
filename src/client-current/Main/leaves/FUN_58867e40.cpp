// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58867E40 .. +0x3D bytes.
extern "C" __declspec(naked) void FUN_58867e40() {
    __asm {
        mov eax, dword ptr [esp + 8]
        cmp eax, 2
        ; Exact mapped bytes 75 15: jne 0x58867e5e
        __asm _emit 0x75
        __asm _emit 0x15
        mov eax, dword ptr [ecx + 74h]
        cmp eax, dword ptr [esp + 4]
        ; Exact mapped bytes 75 26: jne 0x58867e78
        __asm _emit 0x75
        __asm _emit 0x26
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        xor eax, eax
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, 3
        ; Exact mapped bytes 74 15: je 0x58867e78
        __asm _emit 0x74
        __asm _emit 0x15
        cmp eax, 4
        ; Exact mapped bytes 75 10: jne 0x58867e78
        __asm _emit 0x75
        __asm _emit 0x10
        mov ecx, dword ptr [esp + 4]
        push ecx
        ; Exact mapped bytes 8B 0D 20 48 A2 58: mov ecx, dword ptr [0x58a24820]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 98 A7 EF FF: call 0x58762610
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xa7
        __asm _emit 0xef
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
