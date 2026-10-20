// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588667A0 .. +0x48 bytes.
extern "C" __declspec(naked) void FUN_588667a0() {
    __asm {
        mov eax, dword ptr [ecx + 1f40h]
        cmp eax, -1
        ; Exact mapped bytes 74 37: je 0x588667e2
        __asm _emit 0x74
        __asm _emit 0x37
        imul eax, eax, 0c8h
        ; Exact mapped bytes 66 8B 84 08 10 08 00 00: mov ax, word ptr [eax + ecx + 0x810]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0x10
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 0ffc0h
        ; Exact mapped bytes 66 23 C2: and ax, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc2
        mov edx, 1300h
        ; Exact mapped bytes 66 3B C2: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 75 18: jne 0x588667e3
        __asm _emit 0x75
        __asm _emit 0x18
        push 0
        push 0
        push 0
        push 12dh
        ; Exact mapped bytes E8 15 53 F0 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x53
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 8E 3D F0 FF: call 0x5876a570
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x3d
        __asm _emit 0xf0
        __asm _emit 0xff
        ret
        ; Exact mapped bytes E9 38 D6 FF FF: jmp 0x58863e20
        __asm _emit 0xe9
        __asm _emit 0x38
        __asm _emit 0xd6
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
